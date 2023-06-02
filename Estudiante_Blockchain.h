#pragma once
#include "Estudiante.h"

class Estudiante_Blockchain :public Estudiante
{
    int fuerzaBrazos;
public:
    Estudiante_Blockchain(string nombre, int edad) : Estudiante(nombre, edad) {
        fuerzaBrazos = rand() % 11; // Valor aleatorio entre 0 y 10
        overall += fuerzaBrazos;
    }
    void ostrarDatos() {
        Estudiante::MostrarDatos();
        cout << "Fuerza Brazos: " << fuerzaBrazos << endl;
    }
    friend Estudiante_Blockchain &operator++(Estudiante_Blockchain& estudiante) {
        int nivelActual = estudiante.cinta->getNivel();
        if (nivelActual < 7) {
            estudiante.cinta->setNivel(nivelActual + 1);
            estudiante.overall += 1;
        }
        return estudiante;
    }
};

