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

void print(int s, char c, int n){

  for(int i = s; i>0; i--){
    std::cout << " ";
  }
  for(int i = n; i>0; i--){
    std::cout << c;
  }
  std::cout << std::endl;
}

/**
 *
 * int main(){
 *   int s;
 *   char c;
 *   int n;
 *
 *   std::cin >> s >> c >> n;
 *
 *   retrun 0;
 * }
 */
