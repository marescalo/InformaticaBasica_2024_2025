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
#include "usuario.cc"
#include "vehiculos.cc"

class EmpresaAlquiler {
private:
    std::vector<shared_ptr<Vehiculo>> vehiculos;
    std::vector<shared_ptr<Usuario>> usuarios;
    double ingresosEsperados;

public:
    EmpresaAlquiler() : ingresosEsperados(0) {}

    void agregarVehiculo(shared_ptr<Vehiculo> vehiculo) {
        vehiculos.push_back(vehiculo);
    }

    void agregarUsuario(shared_ptr<Usuario> usuario) {
        usuarios.push_back(usuario);
    }

    void alquilarVehiculo(int indiceVehiculo, int tiempo, std::string nombreCliente) {
        if (indiceVehiculo >= 0 && indiceVehiculo < vehiculos.size() && !vehiculos[indiceVehiculo]->estaAlquilado()) {
            vehiculos[indiceVehiculo]->alquilar();
            ingresosEsperados += vehiculos[indiceVehiculo]->calcularCosto(tiempo);
            std::cout << "El " << vehiculos[indiceVehiculo]->getTipo() << " ha sido alquilado por " << nombreCliente << "." << std::endl;
        } else {
            std::cout << "El vehiculo no esta disponible." << std::endl;
        }
    }

    void mostrarVehiculosDisponibles() {
        std::cout << "Vehiculos disponibles:" << std::endl;
        for (size_t i = 0; i < vehiculos.size(); ++i) {
            if (!vehiculos[i]->estaAlquilado()) {
                std::cout << i << ". " << vehiculos[i]->getTipo() << " (Costo: " << vehiculos[i]->getCosto() << ")" << std::endl;
            }
        }
    }

    void mostrarIngresosEsperados() {
        std::cout << "Ingresos esperados: " << ingresosEsperados << " euros." << std::endl;
    }

    void mostrarVehiculosAlquilados() {
        std::cout << "Vehiculos alquilados:" << std::endl;
        for (const auto& vehiculo : vehiculos) {
            if (vehiculo->estaAlquilado()) {
                std::cout << vehiculo->getTipo() << std::endl;
            }
        }
    }
};