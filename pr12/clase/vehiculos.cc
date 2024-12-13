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

class Vehiculo{

  public:
    Vehiculo(std::string t, double c) : tipo(t), alquilado(false), costo(c) {}
    virtual ~Vehiculo() {}
    virtual double calcularCosto(int tiempo) = 0; // Método polimórfico
    bool EstaAlquilado()const{
      return alquilado;
    }
    void alquilar() {
        alquilado = true;
    }
    void devolver() {
        alquilado = false;
    }
    std::string getTipo() const {
        return tipo;
    }
    double getCosto() const {
        return costo;
    }
    
  private:
    std::string tipo;
    bool alquilado;
    double costo;
};


class Coche : public Vehiculo {
  public:
    Coche(double c) : Vehiculo("Coche", c) {}

    double calcularCosto(int dias) override {
        return dias * costo;
    }

};

class Bicicleta : public Vehiculo {
  public:
    Bicicleta(double c) : Vehiculo("Bicicleta", c) {}

    double calcularCosto(int horas) override {
        return horas * costo;
    }
};

class Motocicleta : public Vehiculo {
  public:
    Motocicleta(double c) : Vehiculo("Motocicleta", c) {}

    double calcularCosto(int horas) override {
        return horas * costo;
    }
};


class Barco : public Vehiculo {
  public:
    Barco(double c) : Vehiculo("Barco", c) {}

    double calcularCosto(int semanas) override {
        return semanas * costo;
    }
};


class Caravana : public Vehiculo {
  public:
    Caravana(double c) : Vehiculo("Caravana", c) {}

    double calcularCosto(int semanas) override {
        return semanas * costo;
    }
};