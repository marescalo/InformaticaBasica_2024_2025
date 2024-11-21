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

int main(){
    std::size_t longitud;
    std::cin >> longitud;
    std::vector<int> vector1 = CrearVector(longitud);
    std::vector<int> vector2 = CrearVector(longitud);
    std::cout << ProductoEscalar(vector1,vector2) << std::endl;
    return 0;
}