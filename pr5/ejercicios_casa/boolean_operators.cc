/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file boolean_operators.cc
  * @author Margarita Blanca Escobar Alonso alu0101567211@ull.edu.es
  * @date Oct 23 2023
  * @brief Este programa es una calculadora de operadores logicos
  * @bug There are no known bugs
  * @see 
  */

 #include <iostream>

 int main(){

  std::cout << "tabla de la verdad para la puerta OR" << std::endl;
  std::cout << "0 + 0 = " << (0 + 0) << std::endl;
  std::cout << "0 + 1 = " << (0 + 1) << std::endl;
  std::cout << "1 + 0 = " << (1 + 0) << std::endl;
  std::cout << "1 + 1 = " << (1 + 1) << std::endl;

  std::cout << "tabla de la verdad para la puerta AND" << std::endl;
  std::cout << "0 * 0 = " << (0 * 0) << std::endl;
  std::cout << "0 * 1 = " << (0 * 1) << std::endl;
  std::cout << "1 * 0 = " << (1 * 0) << std::endl;
  std::cout << "1 * 1 = " << (1 * 1) << std::endl;

  std::cout << "tabla de la verdad para la puerta NOT" << std::endl;
  std::cout << "~0 = " << 1 << std::endl;
  std::cout << "~1 = " << 0 << std::endl;

  return 0;
 }
