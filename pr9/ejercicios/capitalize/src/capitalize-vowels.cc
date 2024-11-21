/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Margarita Blanca Escobar Alonso alu0101567211@ull.edu.es
* @date Nov 21 2024
* @brief 
*
* @see 
*/

#include "capitalize-vowels.h"

// @brief Esta función imprime el propósito del programa
void PropositoDelPrograma() {
  std::cout << "Este programa convierte a mayúsculas todas las vocales minúsculas de una cadena de caracteres" << std::endl; 
}

// @brief Esta función comprueba que los parámetros pasados por linea de comando son los correctos para el desarrollo del programa  
bool ComprobarParametros(const int argc, char* argv[], const int kNumeroCorrecto) {
  if (argc == kNumeroCorrecto) {
    return true;
  }
  std::cout << std::endl << "Este programa ha sido ejecutado con un número o tipo incorrecto de parámetros" << std::endl << std::endl;
  std::cout << "Este programa debe llamar" << argv[0] << " Parámetro 1" << std::endl;
  std::cout << "Parámetro 1: cadena de caracteres sin espacios" << std::endl;
  return false;
}

/**
  * @brief Esta función convierte a mayúsculas todas las vocales minúsculas de
  * una cadena de caracteres 
  * @param Toma como parámetro una cadena de caracteres sin espacios (cadena)
  * @return Retorna la misma cadena pero ya convertida (cadena)
  */
std::string VocalesAMayus(int argc, char* argv[]) {
  std::string cadena = argv[1];
  for (int i = 0; i < cadena.length(); ++i) {
    if (cadena[i] == 'a' || cadena[i] == 'e' || cadena[i] == 'i' || cadena[i] == 'o' || cadena[i] == 'u') {
      cadena[i] = toupper(cadena[i]);
    }
  }
  return cadena;
}