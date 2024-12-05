/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Margarita Blanca Escobar Alonso alu0101567211@ull.edu.es
* @date Dec 4 2024
* @brief 
*
* @see 
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    std::string fichero, linea;
    std::getline(cin, fichero);
    ifstream archivo(fichero.c_str());
    if(archivo.fail()){
        std::cout << "No existe el archivo!" << endl;
        return 1;
    }
    while (getline(archivo, linea)) {
        for (int i = 0; i < linea.length(); ++i)
            switch (linea[i]){
            case 'a':
                linea[i] = 'e';
                break;
            case 'e':
                linea[i] = 'i';
                break;
            case 'i':
                linea[i] = 'o';
                break;
            case 'o':
                linea[i] = 'u';
                break;
            case 'u':
                linea[i] = 'a';
                break;
            default:
                break;
        }
        std::cout << linea << endl;
    } 
    return 0;
}