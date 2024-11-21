/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Margarita Blanca Escobar Alonso alu0101567211@ull.edu.es
* @date Nov 21 2024
* @brief 
*
* @see 
*/

#include "approximate_root.h"

void PropositoDelPrograma() {
  std::cout << "Programa que devuelve el resultado de la funcion propuesta" << std::endl;
  std::cout << "en la practica de la octava semana" << std::endl;
  std::cout << std::endl;
}

bool ComprobarParametros(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "Este programa ha sido ejecutado con la cantidad de parámetros incorrecta" << std::endl; 
    std::cout << "Este programa debería ser llamado: " << argv[0] << " param1 param2 param3" << std::endl;
    std::cout << "param1 param2 param3: " << " Numeros naturales que pueden ser decimales" << std::endl;
    return false;
  }
  return true;
}

double RaizCuadrada(int argc, char* argv[]){
    double numero = std::__cxx11::stol(argv[1]);
    double root{1.0};
    double delta{1.0};
    while(std::fabs(root * root - numero) > EPSILON){
        if (delta > 0){
            while(root * root < numero){
                root += delta;
            } 
        } else {
            while(root * root > numero){
                root += delta;
            }
        }
        delta *= -0.5;
    }
    return root;
}