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

#ifdef FECHA_H
#define FECHA_H

#include <iostream>
#include <fstream>

class Fecha
{
private:
    int dia{};
    int mes{}; 
    int anio{};
public:
    Fecha(int d, int m, int a);
    bool is_valid_date();
    bool is_leap_year();
    void print_date();
    void save_date_to_file(std::ofstream &file);
};

#endif