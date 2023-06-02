#pragma once
#include "Estudiante.h"
class Estudiante_Cobra : public Estudiante {
public:
    int fuerzaPiernas;

    Estudiante_Cobra(std::string _nombre, int _edad) : Estudiante(_nombre, _edad) {
        fuerzaPiernas = rand() % 11;
        overall += fuerzaPiernas;
    }

    void mostrarInformacion() {
        Estudiante::mostrarInformacion();
        cout << "Fuerza Piernas: " << fuerzaPiernas << endl;
    }
};

