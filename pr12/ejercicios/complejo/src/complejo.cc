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

#include "complejo.h"

Complejo::Complejo() : real(0), imaginario(0) {}
Complejo::Complejo(double real, double imaginario) : real(real), imaginario(imaginario) {}
Complejo Complejo::operator+(const Complejo &otro) const {
    return Complejo(real + otro.real, imaginario + otro.imaginario);
}
Complejo Complejo::operator-(const Complejo &otro) const {
    return Complejo(real - otro.real, imaginario - otro.imaginario);
}
Complejo Complejo::operator*(const Complejo &otro) const {
    double mult_real = real * otro.real - imaginario * otro.imaginario;
    double mult_imag = imaginario * otro.real + real * otro.imaginario;
    return Complejo(mult_real, mult_imag);
}
Complejo Complejo::operator/(const Complejo &otro) const {
    double div_real = ((real * otro.real + imaginario * otro.imaginario)/(otro.real * otro.real + otro.imaginario * otro.imaginario));
    double div_imag = ((imaginario * otro.real - real * otro.imaginario)/(otro.real * otro.real + otro.imaginario * otro.imaginario));
    return Complejo(div_real, div_imag);
}
Complejo Complejo::conjugate() const {
    return Complejo(real, -imaginario);
}
double Complejo::valorAbs() const {
    return std::sqrt(real * real + imaginario * imaginario);
}
Complejo Complejo::exponencial(double exponente) const{
  double valor_abs = std::pow(std::sqrt(real * real + imaginario * imaginario), exponente); // this->valorAbs() ^ exponente
  double argumento = std::atan2(imaginario, real);
  double parte_real = valor_abs * std::cos(argumento * exponente);
  double parte_imaginaria = valor_abs * std::sin(argumento * exponente);
  return Complejo(parte_real, parte_imaginaria);
}
std::string Complejo::Imprimir(double exponente) const {
  std::string output = "(" + std::to_string(real) + ", " + std::to_string(imaginario) + ")^" + std::to_string(exponente) + " = ";
  return output;
}
std::ostream &operator<<(std::ostream &out, const Complejo &c) {
    out << c.real << (c.imaginario >= 0 ? " + " : " - ") << std::abs(c.imaginario) << "i";
    return out;
}
std::istream &operator>>(std::istream &in, Complejo &c) {
    std::cout << "Introduce la parte real: ";
    in >> c.real;
    std::cout << "Introduce la parte imaginaria: ";
    in >> c.imaginario;
    return in;
}