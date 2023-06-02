#include <iostream>
#include "Cinta.h"
#include"Estudiante.h"
#include "Estudiante_Blockchain.h"
#include"Estudiante_cobra.h"
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
void crearestudiante(vector<Estudiante*>cobra, vector<Estudiante*>blockchain) {

}
void modificarestudiante(vector<Estudiante*>cobra, vector<Estudiante*>blockchain) {

}
void eliminarestudiante(vector<Estudiante*>cobra, vector<Estudiante*>blockchain) {

}
void listarestudiante(vector<Estudiante*>cobra, vector<Estudiante*>blockchain){
	for (Estudiante* estudiante : estudiantes) {
		estudiante->MostrarDatos();
		cout << endl;
	}
}
void promoverestudiante(vector<Estudiante*>cobra, vector<Estudiante*>blockchain) {
	int opcionascenso,dojo;
	cout << "1.estudiantes cobra\n2.estudiantes blockchain";
	cin >> dojo;
	if (dojo==1) {
		for (Estudiante* estudiante : cobra) {
			estudiante->MostrarDatos();
			cout << endl;
		}
	}
	else {
		for (Estudiante* estudiante : blockchain) {
			estudiante->MostrarDatos();
			cout << endl;
		}
	}
	cout << "Elija un estudiante";
	cin >> opcionascenso;
	
}
void degradarestudiante(vector<Estudiante*>cobra, vector<Estudiante*>blockchain) {
}
void simulacion(vector<Estudiante*>cobra, vector<Estudiante*>blockchain) {
}

void menu() {
	srand(time(0));
	int opcion = 1;
	vector<Estudiante*> cobra,blockchain;
	srand(time(0));
	while (opcion != 8) {
		cout << "1.Crear estudiante\n2.Modificar Estudiante\n3.Eliminar Estudiante\n4.Listar Estudiante\n5.Promover cinta del estudiante\n6.Degradar cinta del estudiante\n7.Simulacion\n8.Salir\n";
		cin >> opcion;
		switch (opcion) {
		case 1:
			crearestudiante(estudiantes);
			break;
		case 2:
			modificarestudiante(estudiantes);
			break;
		case 3:
			eliminarestudiante(estudiantes);
			break;
		case 4:
			listarestudiante(estudiantes);
			break;
		case 5:
			promoverestudiante(estudiantes);
			break;
		case 6:
			degradarestudiante(estudiantes);
			break;
		case 7:
			simulacion(estudiantes);
			break;
		case 8:
			cout << "Buen dia";
			break;
		default:
			cout << "Opcion no valida";
		}
	}
}
int main(){
	menu();
}