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
  const std::string rocinante{argv[2]};
  std::ofstream archivosalida{rocinante};

  int contador_lineas{1};
  int contador_palabras{0};
  std::string word;
  std::string line;

  while(std::getline(archivo,line)){
    for(line >> word){
    //for(std::string& word : line)
      if(word == "Rocinante"){
        contador_palabras++;
      }
    }
    archivosalida << contador_lineas << "," << contador_palabras;
    archivosalida << std::endl;
    contador_lineas++;
  }


  return 0;
}