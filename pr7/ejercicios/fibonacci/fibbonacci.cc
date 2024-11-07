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

int main(){

  int num1{0};
  int num2{1};
  int sum{};
  int i{0};
  std::cin >> i;

  for(int j = i; j > 0; j--){
    std::cout << num1 << std::endl;
    sum = num1+num2;
    num1 = num2;
    num2 = sum;
  }

  return 0;
}