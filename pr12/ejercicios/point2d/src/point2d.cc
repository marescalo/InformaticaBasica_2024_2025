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
#include <cmath>

class Point2d{

  public:

    Point2d(double _x, double _y){};
    void Show(){};
    void Move(double move_x, double move_y){};
    double Distance(Point2d punto2){};
    Point2d Middle(Point2d punto2){};

  private:

    double coordenada_x{};
    double coordenada_y{};
};

Point2d::Point2d(double _x, double _y){
    coordenada_x = _x;
    coordenada_y = _y;
}

void Point2d::Show(){
    std::cout << "(" << coordenada_x << ", " << coordenada_y << ")" << std::endl;
}

double Point2d::Distance(Point2d punto2){
    double _dx = coordenada_x - punto2.coordenada_x;
    double _dy = coordenada_y - punto2.coordenada_y;
    double raiz = std::sqrt(_dx*_dx + _dy*_dy);
    return raiz;
}

Point2d Point2d::Middle(Point2d punto2){
    double middle_x = (coordenada_x + punto2.coordenada_x) / 2.0;
    double middle_y = (coordenada_y + punto2.coordenada_y) / 2.0;
    return Point2d(middle_x,middle_y);
}

void Point2d::Move(double move_x, double move_y){
    coordenada_x = move_x;
    coordenada_y = move_y;
}