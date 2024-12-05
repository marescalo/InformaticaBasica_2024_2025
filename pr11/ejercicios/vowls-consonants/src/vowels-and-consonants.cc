/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Margarita Blanca Escobar Alonso alu0101567211@ull.edu.es
* @date Dec 4 2024
* @brief 
*
* @see 
*/

#include "vowels-and-consonants.h"

void Usage(int argc, char *argv[]) {
  if (argc > 2) {
    std::cout << argv[0] << ": Ha introducido más de un parámetro." << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información." << std::endl;
    exit(EXIT_SUCCESS);
  }
  if (argc != 2) {
    std::cout << argv[0] << ": Falta un fichero como parámetro." << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información." << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

bool EsVocal(const char letra) {
  int letra_mayuscula{toupper(letra)};
  return (letra_mayuscula == 'A' or letra_mayuscula == 'E' or letra_mayuscula == 'I' or letra_mayuscula == 'O' or letra_mayuscula == 'U');
}

int CuentaConsonantes(const std::string& palabra) {
  int consonantes{0};
  for (const auto &caracter_actual : palabra) {
    if (isalpha(caracter_actual) and !EsVocal(caracter_actual)) {
      ++consonantes;
    }
  }
  return consonantes;
}

int CuentaVocales(const std::string& palabra) {
  int vocales{0};
  for (const auto &caracter_actual : palabra) {
    if (isalpha(caracter_actual) and EsVocal(caracter_actual)) {
      ++vocales;
    }
  }
  return vocales;
}

int PalabraConMasConsonantes(const std::string& linea, std::string& mas_consonantes_anterior) {
  std::string palabra{""}; /// Para ir almacenando las palabras de la línea
  for (const auto &caracter_actual : linea) {
    if (!isalpha(caracter_actual)) {
      if (CuentaConsonantes(palabra) > CuentaConsonantes(mas_consonantes_anterior)) {
        mas_consonantes_anterior = palabra;
      }
      palabra = "";
    } else {
      palabra += caracter_actual;
    }
  }
  if (CuentaConsonantes(palabra) > CuentaConsonantes(mas_consonantes_anterior)) {
    mas_consonantes_anterior = palabra;
  }
  return 0;
}

int PalabraConMasVocales(const std::string& linea, std::string& mas_vocales_anterior) {
  std::string palabra{""}; /// Para ir almacenando las palabras de la línea
  for (const auto &caracter_actual : linea) {
    if (!isalpha(caracter_actual)) {
      if (CuentaVocales(palabra) > CuentaVocales(mas_vocales_anterior)) {
        mas_vocales_anterior = palabra;
      }
      palabra = "";
    } else {
      palabra += caracter_actual;
    }
  }
  if (CuentaVocales(palabra) > CuentaVocales(mas_vocales_anterior)) {
    mas_vocales_anterior = palabra;
  }
  return 0;
}