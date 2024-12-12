/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Margarita Blanca Escobar Alonso alu0101567211@ull.edu.es
* @date Dec 12 2024
* @brief 
*
* @see 
*/

#include "complejo.h"

int main() {
  Complejo complejo1(2, 3);
  Complejo complejo2(2, 2);
  Complejo resultado;
  Complejo complejo3;
  std::cin >> complejo3;
  std::cout << "Complejo 1: " << complejo1 << std::endl;
  std::cout << "Complejo 2: " << complejo2 << std::endl;
  std::cout << "Complejo 3: " << complejo3 << std::endl;
  resultado = complejo1 + complejo2;
  std::cout << "Suma: " << resultado << std::endl;
  resultado = complejo1 - complejo2;
  std::cout << "Resta: " << resultado << std::endl;
  resultado = complejo1 * complejo2;
  std::cout << "Multiplicación: " << resultado << std::endl;
  resultado = complejo1 / complejo2;
  std::cout << "División: " << resultado << std::endl;
  std::cout << "Complejo: " << complejo1.conjugate() << std::endl;
  std::cout << "Valor absoluto: " << complejo1.valorAbs() << std::endl;
  int exponente = 2;
  resultado = complejo1.exponencial(exponente);
  std::cout << complejo1.Imprimir(exponente) << resultado << std::endl;
  return 0;
}