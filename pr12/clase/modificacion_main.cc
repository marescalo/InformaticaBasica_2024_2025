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
#include <string>
#include "vehiculos.cc"
#include "usuario.cc"
#include "empresa.cc"

int main() {
    EmpresaAlquiler empresa;

    // Agregar vehiculos
    empresa.agregarVehiculo(make_shared<Coche>(50));
    empresa.agregarVehiculo(make_shared<Motocicleta>(10));
    empresa.agregarVehiculo(make_shared<Bicicleta>(5));
    empresa.agregarVehiculo(make_shared<Caravana>(300));
    empresa.agregarVehiculo(make_shared<Barco>(500));

    // Agregar usuarios
    empresa.agregarUsuario(make_shared<Cliente>("Juan"));
    empresa.agregarUsuario(make_shared<Cliente>("Maria"));

    // Operaciones
    empresa.mostrarVehiculosDisponibles();
    empresa.alquilarVehiculo(0, 3, "Juan"); // Alquila un coche por 3 días
    empresa.alquilarVehiculo(1, 5, "Maria"); // Alquila una motocicleta por 5 horas
    empresa.mostrarIngresosEsperados();
    empresa.mostrarVehiculosDisponibles();
    empresa.mostrarVehiculosAlquilados();

    return 0;
}

/* void Identificacion_Cliente(){


    std::string servicio_contratar;
    std::cout << "introdizca el servicio a contratar" << std::endl;
    std::cin >> servicio_contratar;
    switch(servicio_contratar){
        case coche:
        case moto:
        case bici:
        case barco:
        case caravana:
        default:
    }

}


void Identificacion_Administrador(){
    
}

void Identificacion_Operador(){

}

void Identificacion_Agencia(){


}




int main(){

    int opcion{0};
    std::cout << "Identifiquese: Cliente(1), Administrador(2), Operador(3) o Agencia de vije(4)" << std::endl;
    std::cin >> opcion;

    if(opcion > 4){
        std::cout << "opcion erronea, cierre de programa" << std::endl;
    }
    else{
        switch(opcion){
            case 1:
              Identificacion_Cliente();
              break;
            case 2:
              Identificacion_Administrador();
              break;
            case 3:
              Identificacion_Operador();
              break;
            case 4:
              Identificacion_Agencia();
              break;
            default:
              break;
        }
    }

    return 0;
}

*/