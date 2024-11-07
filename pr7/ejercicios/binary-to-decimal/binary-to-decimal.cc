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
    int contador{0};
    int result{0};
    std::cin >> num;

    while(num/10 != 0){
      if(num%10 == 1){
        result += pow(2,contador);
        num = num/10;
        contador++;
      }
      else if(num%10 == 0){
        num = num/10;
        contador++;
      }
      else{
        std::cout << "wrong input" << std::endl;
        return 0;
      }
    }

    result += pow(2,contador);
    std::cout << result << std::endl;
    return 0;
}