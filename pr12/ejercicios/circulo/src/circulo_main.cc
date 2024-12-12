/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Margarita Blanca Escobar Alonso alu0101567211@ull.edu.es
* @date Dec 12 2024
* @brief 
*
* @see 
*/

#include <iostream>
#include "circulo.cc"

int main(){
  Circulo circulo(33.0, 33.0, 11.0, green);
  circulo.Print();
  std::cout << "Área del ciruclo: " << circulo.Area() << std::endl;
  std::cout << "Perímetro del ciruclo: " << circulo.Perimetro() << std::endl;
  double x = 33.3;
  double y = 33.3;
  if(circulo.EsInterior(x,y)){
    std::cout << "El punto (" << x << ", " << y << ") está dentro del circulo." << std::endl;
  } else {
    std::cout << "El punto (" << x << ", " << y << ") NO está dentro del circulo." << std::endl;
  }
  return 0;
}