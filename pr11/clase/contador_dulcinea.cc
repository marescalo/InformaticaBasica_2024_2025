/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Margarita Blanca Escobar Alonso alu0101567211@ull.edu.es
* @date Dec 5 2024
* @brief Este programa cuenta la cantidad de veces que se encuentra 
*        la palabra Dulcinea en el quijote
*
* @see 
*/

#include <iostream>
#include <string>
#include <fstream>

int  main(int argc, char* argv[]){

  const std::string quijote{argv[1]};
  std::ifstream archivo{quijote};

  int contador{0};
  std::string word;

  while(archivo >> word){
    if(word == "Dulcinea" | word == "DULCINEA"){
      contador++;
    }
  }

  std::cout << "La cantidad de veces que aparece en el archivo la parabra Dulcinea es: " << contador << std::endl;

  return 0;
}