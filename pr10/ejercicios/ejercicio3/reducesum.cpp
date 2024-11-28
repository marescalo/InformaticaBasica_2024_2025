#include "reduce-sum.h"

std::vector<double> GenerateVector(const int size, const double lower, const double upper){

  std::srand(std::time(nullptr)); //crea un numero random
  std::vector<double> vector_final(size); //creamos un vector de tamaño size
  for (int i = 0; i < size; ++i) {
    double numero_aleatorio = lower + std::rand() / (RAND_MAX / (upper - lower)); //creamos el numero aleatorio
    vector_final[i] = numero_aleatorio; //intorducimos en la posicion i el numero aleatorio
  }
  return vector_final; //devolvemos el vector

}

double ReduceSum(std::vector<double> vector){
  double suma{0};
  for (const auto& value: vector){
    suma += value;
  }
  return suma;
}