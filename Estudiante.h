#pragma once
#include <iostream>
#include <string> 
#include"Cinta.h";
using namespace std;
class Estudiante
{
protected:
   string nombre;
    int edad;
    int fuerza;
    int resistencia;
    int overall;
    const int vida=100;
public:
    Estudiante(string nombre, int edad) : nombre(nombre), edad(edad), vida(100) {
        fuerza = rand() % 31; // Valor aleatorio entre 0 y 30
        resistencia = rand() % 31; // Valor aleatorio entre 0 y 30
        overall = fuerza + resistencia;
    }
    void MostrarDatos() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad <<endl;
        cout << "Fuerza: " << fuerza <<endl;
        cout << "Resistencia: " << resistencia <<endl;
        cout << "Overall: " << overall <<endl;
        cout << "Vida: " << vida <<endl;
    }
    
    virtual ~Estudiante() {
    }
    
};

