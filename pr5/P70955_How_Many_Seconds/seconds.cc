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

  int year{};
  int day{};
  int hours{};
  int minutes{};
  int seconds{};

  std::cin >> year >> day >> hours >> minutes >> seconds;
  long long result = ((year*365*24*60*60) + (day*24*60*60) + (hours*60*60) + ( minutes*60) + seconds);
  std::cout << result << std::endl;
  return 0;
}

