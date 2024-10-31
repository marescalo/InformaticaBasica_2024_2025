/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Margarita Blanca Escobar Alonso alu0101567211@ull.edu.es
  * @date Oct 31 2024
  * @brief uppercase and lowercase letters
  *
  * @see https://jutge.org/problems/P98960_en
  */

int main(){

  char letra{};
  std::cin >> letra;
  
  if((static_cast<int>(character) >= 65) && (static_cast<int>(character) <= 90)){
    letra = letra + 32;
  }
  if((static_cast<int>(character) >= 65) && (static_cast<int>(character) <= 90)){
    letra = letra - 32;
  }

  std::cout << letra << std::endl;
  return 0;
}