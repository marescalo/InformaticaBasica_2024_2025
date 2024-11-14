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

void CerosUnos(int num){
  
  bool result = 1;
  for(int i{0}; i<num ; i++){
    for(int j{0}; j<=i; j++){
      std::cout << " " << bool;
      bool=!bool;
    }
    std::cout << std::endl;
  }
}

int main(){

  int num{0};
  std::cin >> num;

  if(num != 0){
    CerosUnos(num);
  }

  return 0;
}
