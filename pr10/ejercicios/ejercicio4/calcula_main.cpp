#include "calcular-vec.h"

int main(){
  std::vector<double> vector_A = GenerateVector(4, 5.0, 10.0);
  for (const auto& value: vector_A) {
    std::cout << "Component: " << value << std::endl;
  }
  double maximo{0.0}, minimo{0.0}, promedio{0.0};
  CalcularVector(vector_A, maximo, minimo, promedio);
  std::cout << "Máximo: " << maximo << std::endl;
  std::cout << "Mínimo: " << minimo << std::endl;
  std::cout << "Promedio: " << promedio << std::endl;
  return 0;
}
