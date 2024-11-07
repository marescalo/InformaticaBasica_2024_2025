/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file desinflado.cc
  * @author Margarita Blanca Escobar Alonso alu0101567211@ull.edu.es
  * @date Oct 23 2023
  * @brief Este programa lee una letra mayuscula y muestra su minuscula
  * @bug There are no known bugs
  * @see 
*/

 #include <iostream>

 int main(){

  char character1{};

  std::cout << "Introduce una letra mayuscula" << std::endl;
  std::cin >> character1;

  char character2{(static_cast<int>(character1))+32};
  std::cout << character2 << std::endl;

  return 0;
 }