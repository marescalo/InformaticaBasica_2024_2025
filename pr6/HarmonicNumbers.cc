/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file Harmonic numbers
  * @author Margarita Blanca Escobar Alonso alu0101567211@ull.edu.es
  * @date Oct 31 2024
  * @brief program that reads a number n and prints the n-th harmonic number, defined as Hn = 1/1 + 1/2 + ⋯ + 1/n.
  * 
  * @bug not known
  * @see https://jutge.org/problems/P59539_en
  */


#include <iostream>
#include <iomanip>

int main () {

  int numb1;

  std::cin >> numb1;

  if(numb1==0) {
    std::cout << std::fixed << std::setprecision(4) << static_cast<double>(numb1) << std::endl;
  }

  else {
    double sum{0};
    for (double i=1 ; i <= numb1 ; i++) {
      sum = sum + 1/i;
    }
    std::cout << std::fixed << std::setprecision(4) << sum << std::endl;
  }

return 0;
}