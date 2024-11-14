/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Margarita Blanca Escobar Alonso alu0101567211@ull.edu.es
* @date Nov 7 2024
* @brief 
*
* @see 
*/

#include <iostream>
#include <math.h>

int main() {

	int num{0};
	int square{0};
	std::cin >> num;

	for(int i{0}; i<=num ; i++) {
		square += i*i;
	}

	std::cout << square << std::endl;

return 0;
}

