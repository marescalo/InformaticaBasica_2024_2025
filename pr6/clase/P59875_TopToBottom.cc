/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Margarita Blanca Escobar Alonso alu0101567211@ull.edu.es
* @date Oct 31 2024
* @brief 
*
* @see 
*/

#include <iostream>

int main() {

  int numb1{};
  int numb2{};

  std::cin >> numb1 >> numb2;

  if (numb1 > numb2) {
    for (int i{numb1} ; i >= numb2; i--) {
      std::cout << i  << std::endl;
    }
  }
  else {
    for (int i{numb2} ; i >= numb1; i--) {
      std::cout << i << std::endl;
    }
  }

  return 0;
}
