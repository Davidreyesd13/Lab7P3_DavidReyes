#pragma once
#include "Estudiante.h"

class Estudiante_Blockchain :public Estudiante
{
public:
    int fuerzaBrazos;

    Estudiante_Blockchain(std::string _nombre, int _edad) : Estudiante(_nombre, _edad) {
        fuerzaBrazos = rand() % 11;
        overall += fuerzaBrazos;
    }

    void mostrarInformacion() {
        Estudiante::mostrarInformacion();
        cout << "Fuerza Brazos: " << fuerzaBrazos << endl;
    }
};

