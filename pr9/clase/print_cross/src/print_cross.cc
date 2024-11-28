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

/*void cross(int n, char c){
    if((n%2) == 0){
        std::cout << "Se necesita un numero impar" << std::endl;
    }
    else{
        for(int i = 0; i<=n ; i++){
            for(int k = i; k<= n; k++){
                if(((n/2)+1) == i){
                    for (int j = 0; j<=n; j++)
                    std::cout << c << std::endl;
                }
                else{
                    std::cout << " " << c << " " << std::endl;
                }
            }
        }
    }
}
*/


void cross(int n, char c){

 for(int i{0}; i <= n; i++){
    if(((n/2)+1) == i){
        for(int j{0}; j<=n ; j++){
            std::cout << c;
        }
    }
    else{
        for(int j{0}; j<=n ; j++){
            if(((n/2)+1) == i){
                std::cout << c;
            }
            else{
                std::cout << " ";
            }
        }
    }
    std::cout << std::endl;
 }
}