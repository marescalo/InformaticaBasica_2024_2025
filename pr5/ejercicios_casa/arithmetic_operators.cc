/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file boolean_operators.cc
  * @author Margarita Blanca Escobar Alonso alu0101567211@ull.edu.es
  * @date Oct 23 2023
  * @brief Este programa es una calculadora de operadores logicos
  * @bug There are no known bugs
  * @see 
  */

 #include <iostream>

 int main(){

    int num1{};
    int num2{};

    std::cout << "Introduca dos numeros" << std::endl;
    std::cin >> num1 >> num2;

    std::cout << "las operaciones realizadas son: +, -, *, /, %" << std::endl;
    std::cout << num1 << " + " << num2 << " = " << (num1 + num2) << std::endl;
    std::cout << num1 << " - " << num2 << " = " << (num1 - num2) << std::endl;
    std::cout << num1 << " * " << num2 << " = " << (num1 * num2) << std::endl;
    std::cout << num1 << " / " << num2 << " = " << (num1 / num2) << " Resto = " << (num1 % num2)<< std::endl;
    std::cout << num1 << " - " << num2 << " = " << (num1 - num2) << std::endl;

    return 0;
 }