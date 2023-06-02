#pragma once
#include <string>
using namespace std;
class Cinta{
public:
    int nivel;
    std::string colorCinta;

    Cinta() {
        nivel = 1;
        actualizarColorCinta();
    }

    void actualizarColorCinta() {
        switch (nivel) {
        case 1:
            colorCinta = "Blanco";
            break;
        case 2:
            colorCinta = "Amarillo";
            break;
        case 3:
            colorCinta = "Naranja";
            break;
        case 4:
            colorCinta = "Verde";
            break;
        case 5:
            colorCinta = "Azul";
            break;
        case 6:
            colorCinta = "Marrón";
            break;
        case 7:
            colorCinta = "Negro";
            break;
        default:
            colorCinta = "Desconocido";
            break;
        }
    }
};
