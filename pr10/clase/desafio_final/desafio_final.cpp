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

std::vector<int> Calculadora(const int size, std::vector <int> polinomio1, std::vector<int> polinomio2){

  std::vector<int> polinomio3(size);

  for(int i{0}; i < size; i++){
    polinomio3[i] = polinomio1[i]+polinomio2[i];
  }

  return polinomio3;
}


int main(){

  std::vector<int> polinomio1{ 3, 2,1};
  std::vector<int> polinomio2{ 0, 5,4};
  int size{3};

  std::vector<int> suma = Calculadora(size,polinomio1, polinomio2);

  for(int i{0}; i < suma.size(); i++){
    std::cout << suma[i] << " , ";
  }
  std::cout << std::endl;
  return 0;
}
