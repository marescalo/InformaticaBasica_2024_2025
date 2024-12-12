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
#include "point2d.cc"

int main(){
  Point2d point1(33.0,33.0);
  Point2d point2(4.0,6.0);
  std::cout << "Punto1: ";
  point1.Show();
  std::cout << "Punto2: ";
  point2.Show();
  std::cout << "Nuevo punto1: ";
  point1.Move(1.0,2.0);
  point1.Show();
  std::cout << "Distancia entre los puntos: " << point1.Distance(point2) << std::endl;
  Point2d MiddlePoint = point1.Middle(point2);
  std::cout << "Punto medio entre los puntos: ";
  MiddlePoint.Show(); 
  return 0;
}