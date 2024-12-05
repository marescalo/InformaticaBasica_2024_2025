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
#include <string>
#include <fstream>

const std::string kHelpText = "Este programa almacena palabras alfabeticamente.";

void Usage(int argc, char *argv[]);
std::string TextoSinCaracteres(const std::string& nombre_fichero);
void SeparaEnFicherosAlfabeticamente(const std::string& texto);