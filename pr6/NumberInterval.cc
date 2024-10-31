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
#include <math.h>

void interval(int a,int b) {
    for(int i{a}; i<=b; i++){
        if(i==b){
            std::cout << i << std::endl;
        }
        else{
            std::cout << i <<",";
        }
    }
}

int main() {

int a{0};
int b{0};

std::cin >> a >> b;

if(a<b){
    interval(a,b);
}
else if(b==a){
    std::cout << a << std::endl;
}
else{
    std::cout << std::endl;
}

return 0;
}