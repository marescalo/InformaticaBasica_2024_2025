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

int doble_factorial(int n){
  int result = n;

  if(n == 0){
    return 1;
  }
  else{
    for(int i=2; i < n; i++){
      result*=(n-i);
      i++;
    }
    return result;
  }
}

int main(){

  int n;
  std::cin >> n;

  std::cout << doble_factorial(n) << std::endl;

  return 0;
}
