/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file multiply.cc
  * @author Margarita Blanca Escobar Alonso alu0101567211@ull.edu.es
  * @date Oct 24 2023
  * @brief Write a program that computes the product of two given natural numbers.
  * @bug There are no known bugs
  * @see 
*/

#include <iostream>

int main(){
  long long int num1{};
  long long int num2{};

  std::cin >> num1 >> num2;
  std::cout << num1*num2 << std::endl;
  return 0;
}
