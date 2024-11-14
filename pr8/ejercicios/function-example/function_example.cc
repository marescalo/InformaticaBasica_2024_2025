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

void funcion(int x, int y, int t){
  double result = (sqrt((2*t) - 4)/((x*x) - (y*y)));
  std::cout << result << std::endl;
}

int main(){
  double x;
  double y;
  double t;

  std::cin >> x >> y >> t;
  funcion(x,y,t);

  return 0;
}