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

bool is_perfect(int n){

  if(n == 0){return false;}

  int perfect=0;
  for (int i{1}; i < n; i++){
    if((n%i) == 0){
      perfect+=i;
    }
  }
  if(n == perfect){
    return true;
  }
  else{
    return false;
  }
}


/*int main(){

  int n;
  std::cin >> n;

  std::cout << is_perfect(n) << std::endl;
  return 0;
}
*/
