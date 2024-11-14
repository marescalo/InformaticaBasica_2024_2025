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
#include <iostream>
#include <sstream>
#include <string>

std::string MayusMinus(std::string palabra) {

  for (int i{0}; i < int(palabra.size()); i++) {
    if (palabra[i] == toupper(palabra[i])) {
      palabra[i] = tolower(palabra[i]);
    } 
    else {
      palabra[i] = toupper(palabra[i]);
    } 
  }
  return palabra;
}

int main() {
  std::string palabra;
  std::cin >> palabra;

  std::cout << MayusMinus(palabra) << std::endl;

  return 0;
}