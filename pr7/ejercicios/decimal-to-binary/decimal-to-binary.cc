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

int main(){

    int num{0};
    int result{0};
    std::cin >> num;

    int aux{1};

    if(num%2 == 0){
      aux = 0;
    }

    while (num > 0) {
      result *= 10;
      result += num%2;
      num /= 2;
    }

    while(result != 0){
      std::cout << result%10;
      result = result/10;
    }
    if(aux == 0){
      std::cout << aux;
    }

    std::cout << std::endl;
    return 0;
}