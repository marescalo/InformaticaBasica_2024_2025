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
#include <vector>
#include <string>
#include <memory>

class Usuario{
  public:
    Usuario(std::string n) : nombre(n) {}
    virtual ~Usuario() {}
    std::string getNombre() const {
        return nombre;
    }
  protected:
    std::string nombre;
};

class Cliente: public Usuario{
  public:
    Cliente(std::string n) : Usuario(n) {}
};

class Administrador : public Usuario {
public:
    Administrador(std::string n) : Usuario(n) {}
};

class Operador : public Usuario {
public:
    Operador(std::string n) : Usuario(n) {}
};

class AgenciaDeViaje : public Usuario {
public:
    AgenciaDeViaje(std::string n) : Usuario(n) {}
};