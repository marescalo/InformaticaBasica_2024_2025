/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Margarita Blanca Escobar Alonso alu0101567211@ull.edu.es
* @date Nov 27 2024
* @brief 
*
* @see 
*/

#include "vector.h"

std::vector<double> GenerateVector(const int size, const double lower, const double upper){

  std::srand(std::time(nullptr));
  std::vector<double> vector_final(size);
  for (int i = 0; i < size; ++i) {
    double numero_aleatorio = lower + std::rand() / (RAND_MAX / (upper - lower));
    vector_final[i] = numero_aleatorio;
  }
  return vector_final;

}