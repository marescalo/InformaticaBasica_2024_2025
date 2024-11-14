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
#include <math.h>

bool IsAValidTriangle(double base, double lado1, double lado2) {
  return ((base < lado1+lado2) && (lado1 < base+lado2) && (lado2 <  base+lado1));
}

double areadeltriangulo(double base, double lado1, double lado2) {
  
  double semiperimeter = (base + lado1 + lado2) / 2;
  double area = sqrt((semiperimeter*(semiperimeter-base)*(semiperimeter-lado1)*(semiperimeter-lado2)));

  return area;
}

int main() {
  double base{0};
  double lado1{0};
  double lado2{0};

  std::cin >> base >> lado1 >> lado2;

  if (IsAValidTriangle(base, lado1, lado2)) {
    std::cout << areadeltriangulo(base, lado1, lado2) << std::endl;
  }
  else {
     std::cout << "Not a valid triangle"  << std::endl;
  }

  return 0;
}