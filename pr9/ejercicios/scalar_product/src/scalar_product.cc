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

#include <iostream>
#include <vector>

int ProductoEscalar(std::vector<int> vectorA, std::vector<int> vectorB){
    if(vectorA.size() != vectorB.size()){
        std::cerr << "Error: Los vectores deben tener la misma longitud." << std::endl;
        return 0;
    }
    int productoEscalar{0};
    for(std::size_t i = 0; i < vectorA.size(); i++){
        productoEscalar += vectorA[i] * vectorB[i];
    }
    return productoEscalar;
}

std::vector<int> CrearVector(std::size_t longitud){
    std::vector<int> vector(longitud);
    for(std::size_t i = 0; i < longitud; ++i){
        std::cin >> vector[i];
    }
    return vector;
}