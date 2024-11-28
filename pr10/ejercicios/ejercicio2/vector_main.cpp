#include <iostream>
#include "vector.h"

int main(){

    int size{1};
    double lower{};
    double upper{};
    std::cin >> size >> lower >> upper;

    std::vector<double> vector = GenerateVector(size,lower,upper);
    for (const auto& value: vector) { //recorremos mostrando el vector
    std::cout << "Components: " << value << std::endl;
    }

    return 0;
}