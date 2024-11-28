/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Margarita Blanca Escobar Alonso alu0101567211@ull.edu.es
* @date Nov 21 2024
* @brief 
*
* @see 
*/

#include <iostream>
#include "minimum_maximun.cc"

int main(){
  int a{0};
  int b{0};
  int mn{0};
  int mx{0};

  std::cin >> a >> b;
  min_max(a,b,mn,mx);
  std::cout << mn << " , " << mx << std::endl;

  return 0;
}