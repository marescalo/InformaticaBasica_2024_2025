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
  int numb1;
  int numb2;
  int numb3;

  std::cin >> numb1 >> numb2 >> numb3;

  if ((numb1 >= numb2)&&(numb1 >= numb3)) {
    std::cout << numb1 << std::endl; 
  }
  else if ((numb2 >= numb1)&&(numb2 >= numb3)) {
    std::cout << numb2 << std::endl;
  }
  else if ((numb3 >= numb1)&&(numb3 >= numb2)) {
    std::cout << numb3 << std::endl;
  }

return 0;
} 