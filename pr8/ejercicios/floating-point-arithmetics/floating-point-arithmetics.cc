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
#include <math.h>

bool AreEqual(const double number1, const double number2, const double epsilon = 1e-7){
  if(fabs(number1 - number2) < epsilon){
    return true;
  }
  else{
    return false;
  }
}

int main() {
  const double kOneThird{0.3333333333};
  std::cout << kOneThird << std::endl;
  std::cout << 1.0 / 3 << std::endl;

  if (AreEqual(kOneThird,(1.0 / 3)) == true) {
    std::cout << "Equals" << std::endl;
  }
  else {
    std::cout << "Different" << std::endl;
  }

  return 0;
}
