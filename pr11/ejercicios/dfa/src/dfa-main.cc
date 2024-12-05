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
#include "dfa.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv);
  const std::string kNombreFichero{argv[1]};
  ImprimeCardinal(kNombreFichero);
  ImprimeFuncionTransicion(kNombreFichero);
  return 0;
}
