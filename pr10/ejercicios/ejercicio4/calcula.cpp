#include "calcular-vec.h"

double CalcularVector(std::vector<double>& vector_A, double& maximo, double& minimo, double& promedio) {
  minimo = vector_A[0];
  for (const auto& value: vector_A) {
    if (value > maximo) {
      maximo = value;
    }
    if (value < minimo) {
      minimo = value;
    }
    promedio += value;
  }
  promedio /= vector_A.size();
}

std::vector<double> GenerateVector(const int longitud, const double minimo, const double maximo) {
  std::srand(std::time(nullptr));
  std::vector<double> vector_final(longitud);
  for (int i = 0; i < longitud; ++i) {
    double numero_aleatorio = minimo + std::rand() / (RAND_MAX / (maximo - minimo));
    vector_final[i] = numero_aleatorio;
  }
  return vector_final;
}
