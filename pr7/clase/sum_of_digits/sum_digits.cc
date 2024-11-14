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

int SumDigits(int num){

  int result{0};
  while (num != 0){
    result+=num%10;
    num=num/10;
  }
  return result;
}

int main(){

  int number{0};

  while (number >= 0 ){
    std::cin >> number;
    std::cout << "The sum of the digits of " << number << " is " << SumDigits(number)<< "." << std::endl;

  }
  return 0;
}
