#pragma once
#include "Estudiante.h"
class Estudiante_Cobra : public Estudiante {
public:
    int fuerzaPiernas;

    Estudiante_Cobra(std::string _nombre, int _edad) : Estudiante(_nombre, _edad) {
        fuerzaPiernas = 1+rand() % 10;
        overall += fuerzaPiernas;
    }

    void mostrarInformacion() {
        Estudiante::mostrarInformacion();
        cout << "Fuerza Piernas: " << fuerzaPiernas << endl;
    }
};

