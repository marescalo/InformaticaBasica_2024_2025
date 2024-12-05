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

#include "creaficheros.h"

int main(int argc, char* argv[]) {
  // Usage(argc, argv);
  const std::string kNombreFichero{argv[1]};
  std::string textoficherosolopalabras{TextoSinCaracteres(kNombreFichero)};
  SeparaEnFicherosAlfabeticamente(textoficherosolopalabras);
  return 0;
}