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

#include <approximate_root.h>

int main(int argc, char* argv[]){
    PropositoDelPrograma();
    if (!ComprobarParametros(argc, argv, 2)){
        return 1;
    }
    std::cout << RaizCuadrada(argc, argv) << std::endl;
    return 0;
}