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
#include <vector>

const std::string kHelpText = "Este programa lee un fichero con especificacion sobre un automata finito determinista.";

void Usage(int argc, char *argv[]);
int ImprimeCardinal(const std::string nombre_fichero);
int ImprimeFuncionTransicion(const std::string nombre_fichero);