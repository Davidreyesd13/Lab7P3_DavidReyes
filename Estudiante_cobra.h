#pragma once
#include "Estudiante.h"
class Estudiante_Cobra : public Estudiante {
private:
    int fuerzaPiernas;

public:
    Estudiante_Cobra(std::string nombre, int edad) : Estudiante(nombre, edad) {
        fuerzaPiernas = rand() % 11; // Valor aleatorio entre 0 y 10
        overall += fuerzaPiernas;
    }

    void mostrarDatos() {
        Estudiante::MostrarDatos();
        std::cout << "Fuerza Piernas: " << fuerzaPiernas << std::endl;
    }
};

