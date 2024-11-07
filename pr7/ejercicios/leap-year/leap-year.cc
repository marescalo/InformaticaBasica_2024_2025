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

int main(){

  int num{0};
  std::cin >> num;

  if((num >= 1800) && (num <= 9999)){
    if((num == 1800)||(num == 1900)){
        std::cout << "NO" << std::endl;
    }
    else if(num == 2000){
        std::cout << "YES" << std::endl;
    }
    else{
      if((num%4 == 0)&&(num%100 != 00)){
        std::cout << "YES" << std::endl;
      }
      else if((num/100)%4 == 0){
        std::cout << "YES" << std::endl;
      }
      else{
        std::cout << "NO" << std::endl;
      }
    }
  }
  
  return 0;
}