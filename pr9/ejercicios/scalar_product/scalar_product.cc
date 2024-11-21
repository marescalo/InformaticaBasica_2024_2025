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
#include <vector>

int ScalarProduct(const std::vector<int> vector1, const std::vector<int> vector2){

    if(vector1.size() != vector2.size()){
        std::cout << "Los vectores tienen longitudes distintas" << std::endl;
        return 0;
    }

    int escalar{0};
    for(int i = 0; i<vector1.size() ;i++){
        escalar += vector1[i] * vector2[i];
    }

    return escalar
}

int main(){

  std::vector<int> vector1;
  std::vector<int> vector2;

  std::cin >> vector1 >> vector2;

  std::cout << ScalarProduct(vector1,vector2) << std::endl; 

  return 0;
}