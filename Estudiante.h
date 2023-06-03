#pragma once
#include <iostream>
#include <string> 
#include"Cinta.h";
using namespace std;
class Estudiante
{
public:
    std::string nombre;
    int edad;
    Cinta* cinta;
    int fuerza;
    int resistencia;
    int overall;
    const int Vida;

    Estudiante(std::string _nombre, int _edad):Vida(100) {
        nombre = _nombre;
        edad = _edad;
        cinta = new Cinta();
        fuerza = 0+rand() % 30;
        resistencia = 0+rand() % 30;
        overall = fuerza + resistencia;
    }

    virtual ~Estudiante() {
        delete cinta;
    }

    void mostrarInformacion() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Color de cinta: " << cinta->colorCinta << endl;
        cout << "Fuerza: " << fuerza << endl;
        cout << "Resistencia: " << resistencia << endl;
        cout << "Overall: " << overall << endl;
        cout << "Vida: " << Vida << endl;
    }

    void ascender() {
        if (cinta->nivel < 7) {
            cinta->nivel++;
            cinta->actualizarColorCinta();
            overall += 5; // Incrementar overall al ascender
        }
        else {
            cout << "Ya esta en el nivel mas alto";
        }
    }

    void descender() {
        if (cinta->nivel > 1) {
            cinta->nivel--;
            cinta->actualizarColorCinta();
            overall -= 5; // Decrementar overall al descender
        }
        else {
            cout << "Ya esta en el menor nivel posible";
        }
    }

    virtual int calcularAtaque() {
        double porcentajeCinta;
        switch (cinta->nivel) {
        case 1:
            porcentajeCinta = 0.4;
            break;
        case 2:
            porcentajeCinta = 0.5;
            break;
        case 3:
            porcentajeCinta = 0.6;
            break;
        case 4:
            porcentajeCinta = 0.7;
            break;
        case 5:
            porcentajeCinta = 0.8;
            break;
        case 6:
            porcentajeCinta = 0.9;
            break;
        case 7:
            porcentajeCinta = 1.0;
            break;
        default:
            porcentajeCinta = 0.0;
            break;
        }
        return static_cast<int>(overall * porcentajeCinta);
    }

    virtual int calcularDefensa() {
        double porcentajeCinta;
        switch (cinta->nivel) {
        case 1:
            porcentajeCinta = 0.4;
            break;
        case 2:
            porcentajeCinta = 0.5;
            break;
        case 3:
            porcentajeCinta = 0.6;
            break;
        case 4:
            porcentajeCinta = 0.7;
            break;
        case 5:
            porcentajeCinta = 0.8;
            break;
        case 6:
            porcentajeCinta = 0.9;
            break;
        case 7:
            porcentajeCinta = 1.0;
            break;
        default:
            porcentajeCinta = 0.0;
            break;
        }
        return static_cast<int>(resistencia * porcentajeCinta);
    }
    int getvida() const
    {
        return Vida;
    }
};