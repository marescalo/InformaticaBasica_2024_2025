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

#ifndef COMPLEJO_H
#define COMPLEJO_H

#include <iostream>
#include <cmath>
#include <string>

class Complejo {
private:
    double real;
    double imaginario;
public:
    Complejo();
    Complejo(double real, double imaginario);
    // Métodos para sobrecargar operadores
    Complejo operator+(const Complejo &otro) const;
    Complejo operator-(const Complejo &otro) const;
    Complejo operator*(const Complejo &otro) const;
    Complejo operator/(const Complejo &otro) const;
    Complejo conjugate() const;
    double valorAbs() const;
    Complejo exponencial(double exponente) const;
    std::string Imprimir(double exponente) const;
    friend std::ostream &operator<<(std::ostream &out, const Complejo &c);
    friend std::istream &operator>>(std::istream &in, Complejo &c);
};

#endif