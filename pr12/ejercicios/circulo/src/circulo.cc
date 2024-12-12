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
#include <cmath>

class Circulo{
  public:
    Circulo(double _xcentro, double _ycentro, double _radio, Color _color){};
    double Area(){};
    double Perimetro(){};
    void Print(){};
    bool EsInterior(double _x, double _y){};

  private:
    double centro_x{};
    double centro_y{};
    double radio{};
    Color color{};
};

enum Color{
  red,
  green,
  blue,
  other,
};

Circulo::Circulo(double _xcentro, double _ycentro, double _radio, Color _color){
    centro_x = _xcentro;
    centro_y = _ycentro;
    radio = _radio;
    color = _color;
}

double Circulo::Area(){
    double area = M_PI * radio * radio;
    return area;
}

double Circulo::Perimetro(){
    double perimetro =  2 * M_PI * radio;
    return perimetro;
}

void Circulo::Print(){
    std::cout << "Circulo: " << std::endl;
    std::cout << "| Centro: (" << centro_x << ", " << centro_y << ")" << std::endl;
    std::cout << "| Radio: " << radio << std::endl;
    switch (color){
        case red:
          std::cout << "| Color: Rojo" << std::endl;
          break;
        case green:
          std::cout << "| Color: Verde" << std::endl;
          break;
        case blue:
          std::cout << "| Color: Azul" << std::endl;
          break;
        default:
          std::cout << "| Otro" << std::endl;
          break;
    }
}

bool Circulo::EsInterior(double _x, double _y){
      double distance = std::sqrt((_x - centro_x)*(_x - centro_x) + (_y - centro_y)*(_y - centro_y));
      return distance <= radio;
    }