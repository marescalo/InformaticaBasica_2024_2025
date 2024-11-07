/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Margarita Blanca Escobar Alonso alu0101567211@ull.edu.es
 * @date Oct 31 2024
 * @brief 
 *
 * @see 
*/

#include <iostream>

int main(){

  int num{0};
  int position{1};

  for(int i{1}; i!=0; i++){
    std::cin >> num;
    if(num%2 == 0){
      std::cout << position << std::endl;
      return 0;
    }
    else{
      position++;
    }
  }
  return 0;
}
