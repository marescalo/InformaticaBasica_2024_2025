/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file sum_of_wo_integrer.cc
  * @author Margarita Blanca Escobar Alonso alu0101567211@ull.edu.es
  * @date Oct 23 2023
  * @brief Write a program that reads two numbers and prints their sum.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P57548_en
*/

#include <iostream>

int main(){
  int num1{};
  int num2{};

  std::cin >> num1 >> num2;
  std::cout << num1+num2 << std::endl;

  return 0;
}
