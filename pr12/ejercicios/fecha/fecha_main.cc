/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Margarita Blanca Escobar Alonso alu0101567211@ull.edu.es
* @date Dec 12 2024
* @brief 
*
* @see 
*/

#include <iostream>
#include <fstream>

class Fecha {
private:
    int dia, mes, anio;

public:
    Fecha(int d, int m, int a) : dia(d), mes(m), anio(a) {
        if (!fechaValida()) {
            std::cerr << "Error: Fecha no válida." << std::endl;
            exit(EXIT_FAILURE);
        }
    }

    bool fechaValida() {
        if (mes < 1 || mes > 12) return false;
        if (dia < 1) return false;

        int diasEnMes = 31;
        if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            diasEnMes = 30;
        } else if (mes == 2) {
            if (esBisiesto())
                diasEnMes = 29;
            else
                diasEnMes = 28;
        }

        return dia <= diasEnMes;
    }

    bool esBisiesto() {
        return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
    }

    void imprimirFecha() {
        std::cout << dia << "/" << mes << "/" << anio << std::endl;
    }

    void guardarFechaEnArchivo(std::ofstream &archivo) {
        archivo << dia << "/" << mes << "/" << anio << std::endl;
    }
};

int main() {
    std::ifstream archivoEntrada("fechas_input.txt");
    std::ofstream archivoSalida("fechas_output.txt");

    if (!archivoEntrada.is_open() || !archivoSalida.is_open()) {
        std::cerr << "Error al abrir los archivos." << std::endl;
        return EXIT_FAILURE;
    }

    int dia, mes, anio;
    while (archivoEntrada >> dia >> mes >> anio) {
        Fecha fecha(dia, mes, anio);

        // Imprimir la fecha en consola
        fecha.imprimirFecha();

        // Guardar la fecha en el archivo de salida
        fecha.guardarFechaEnArchivo(archivoSalida);
    }

    archivoEntrada.close();
    archivoSalida.close();

    return 0;
}