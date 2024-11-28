  /**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Margarita Blanca Escobar Alonso alu0101567211@ull.edu.es
  * @date Nov 4 2024
  * @brief 
  *
  * @see 
  */


#include <iostream>
#include <string>

void InversaString(std::string palabra){

  std::string inversa;
  for(auto i : palabra){
    inversa+=i;
  }
  std::cout << inversa << std::endl;

}

int main(){

  std::string palabra;
  std::cin >> palabra;

  InversaString(palabra);
  return 0;
}
