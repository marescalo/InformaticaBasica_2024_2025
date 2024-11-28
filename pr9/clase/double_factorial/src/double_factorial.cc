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

int double_factorial(int x){
  int result = x;

  if(x == 0){
    return 1;
  }
  else{
    for(int i=2; i < x; i++){
      result*=(x-i);
      i++;
    }
    return result;
  }
}