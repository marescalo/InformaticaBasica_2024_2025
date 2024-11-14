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
#include <cstdlib>

bool Numeros(const int n, const int m){
  if(m > n){
    return true;
  }
  else{
    std::cout << "el primer numero tiene que ser menor que el segundo" << std::endl;
    return false;
  }
}

void Random(const int n, const int m){
    srand(static_cast<unsigned int>(time(0)));
    int random_number = n + rand() % (n - m + 1);
    std::cout << "Número aleatorio entre " << n << " y " << m << ": " << random_number << std::endl;
}

int main(){

  int n;
  int m;

  std::cin >> n >> m;

  if(Numeros(n,m) == true){
    Random(n,m);
  }

  return 0;
}