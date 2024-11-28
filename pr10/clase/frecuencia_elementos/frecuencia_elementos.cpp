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
#include <vector>
#include <cstddef>

void RotacionVector(std::vector<int> vector){
  std::vector<int> inversa(vector.size());
  //inversa.size(vector.size());

  int j{1};
  for(int i=vector.size(); i > 0; i++){
    inversa[j] = vector[i];
    std::cout << inversa[j];
    j++;
  }
}


int main(){
  std::vector<int> vector(4);
  for(int i{1}; i<= vector.size(); i++){
    vector[i]=i;
  }
  RotacionVector(vector);

  return 0;
}
