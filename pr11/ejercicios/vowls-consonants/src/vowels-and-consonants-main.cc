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

#include <iostream>
#include "vowels-and-consonants.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);
  /// Abrimos el fichero en modo lectura
  const std::string kNombreFichero{argv[1]};
  std::ifstream fichero{kNombreFichero, std::ios_base::in};
  /// Leemos las líneas del fichero
  std::string linea, mas_vocales, mas_consonantes;
  while (getline(fichero, linea)) {
    PalabraConMasVocales(linea, mas_vocales);
    PalabraConMasConsonantes(linea, mas_consonantes);
  }
  /// Imprimimos los resultados
  std::cout << "Palabra con más vocales: " << mas_vocales << std::endl;
  std::cout << "Palabra con más consonantes: " << mas_consonantes << std::endl;
  return 0;
}