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

void min_max(int a, int b, int& mn, int& mx){
    if(a < b){
        mn = a;
        mx = b;
    }
    else{
        mn = b;
        mx = a;
    }
}