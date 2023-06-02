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
void crearestudiante(vector<Estudiante_Cobra*>cobra, vector<Estudiante_Blockchain*>blockchain) {
	int dojo,edad;
	string nombre;
	cout << "1.Dojo Cobras\n2.Dojo Blockchain"<<endl;
	cin >> dojo;
	cout << "Ingrese el nombre: "<<endl;
	cin >> nombre;
	cout << "Ingrese la edad" << endl;
	cin >> edad;
	if (dojo==1) {
		cobra.push_back(new Estudiante_Cobra(nombre,edad));
	}
	else {
		blockchain.push_back(new Estudiante_Blockchain(nombre, edad));
	}
	cout << "Agregado con Exito";
}
void modificarestudiante(vector<Estudiante_Cobra*>cobra, vector<Estudiante_Blockchain*>blockchain) {

}
void eliminarestudiante(vector<Estudiante_Cobra*>cobra, vector<Estudiante_Blockchain*>blockchain) {
	int i, opcionlistar;
	cout << "1.Cobra\n2.Blockchain";
	cin >> opcionlistar;
	if (opcionlistar == 1) {
		for (size_t i = 0; i < cobra.size(); i++)
		{
			cout << i << ".\n"; cobra.at(i)->mostrarInformacion();
		}
		cout << "Elija el alumno que desea eliminar" << endl;
		cin >> i;
		auto elem_to_remove = cobra.begin() + i;
		cobra.erase(elem_to_remove);
		cout << "Se elimino con exito";
	}
	else {
		for (size_t i = 0; i < blockchain.size(); i++)
		{
			cout << i << ".\n"; blockchain.at(i)->mostrarInformacion();
		}
		cout << "Elija el alumno que desea eliminar" << endl;
		cin >> i;
		auto elem_to_remove = blockchain.begin() + i;
		blockchain.erase(elem_to_remove);
		cout << "Se elimino con exito";
	}
}
void listarestudiante(vector<Estudiante_Cobra*>cobra, vector<Estudiante_Blockchain*>blockchain){
	int opcionlistar;
	cout << "Que dojo desea ver \n1. Cobra\n2.Blockchain";
	cin >> opcionlistar;
	if (opcionlistar==1) {
		for (size_t i = 0; i < cobra.size(); i++)
		{
			cout << i << ".\n" ; cobra.at(i)->mostrarInformacion();
		}
	}
	else {
		for (size_t i = 0; i < blockchain.size(); i++)
		{
			cout << i << ".\n"; blockchain.at(i)->mostrarInformacion();
		}
	}
}
void promoverestudiante(vector<Estudiante_Cobra*>cobra, vector<Estudiante_Blockchain*>blockchain) {
	int i , opcionlistar;
	cout << "1.Cobra\n2.Blockchain";
	cin >> opcionlistar;
	if (opcionlistar == 1) {
		for (size_t i = 0; i < cobra.size(); i++)
		{
			cout << i << ".\n"; cobra.at(i)->mostrarInformacion();
		}
		cout << "Elija el alumno que desea ascender" << endl;
		cin >> i;
		cobra.at(i)->ascender();
		cobra.at(i)->mostrarInformacion();
	}
	else {
		for (size_t i = 0; i < blockchain.size(); i++)
		{
			cout << i << ".\n"; blockchain.at(i)->mostrarInformacion();
		}
		cout << "Elija el alumno que desea ascender" << endl;
		cin >> i;
		blockchain.at(i)->ascender();
		blockchain.at(i)->mostrarInformacion();
	}
	

}
void degradarestudiante(vector<Estudiante_Cobra*>cobra, vector<Estudiante_Blockchain*>blockchain) {
	int i, opcionlistar;
	cout << "1.Cobra\n2.Blockchain";
	cin >> opcionlistar;
	if (opcionlistar == 1) {
		for (size_t i = 0; i < cobra.size(); i++)
		{
			cout << i << ".\n"; cobra.at(i)->mostrarInformacion();
		}
		cout << "Elija el alumno que desea ascender" << endl;
		cin >> i;
		cobra.at(i)->descender();
		cobra.at(i)->mostrarInformacion();
	}
	else {
		for (size_t i = 0; i < blockchain.size(); i++)
		{
			cout << i << ".\n"; blockchain.at(i)->mostrarInformacion();
		}
		cout << "Elija el alumno que desea ascender" << endl;
		cin >> i;
		blockchain.at(i)->descender();
		blockchain.at(i)->mostrarInformacion();
	}
}
void simulacion(vector<Estudiante_Cobra*>cobra, vector<Estudiante_Blockchain*>blockchain) {
	
	
	// Mostrar ganador del torneo
	if (!cobra.empty()) {
		cout << "¡El dojo ganador es el dojo cobra";
	}
	else {
		cout << "¡El dojo ganador es el dojo blockchain";
	}
	cobra.clear();
	blockchain.clear();
}

void menu() {
	srand(time(0));
	int opcion = 1;
	vector<Estudiante_Cobra*>cobra;
	vector<Estudiante_Blockchain*>blockchain;
	cobra.push_back(new Estudiante_Cobra("Raul", 20));
	cobra.push_back(new Estudiante_Cobra("Jose", 21));
	cobra.push_back(new Estudiante_Cobra("Pedro", 22));
	cobra.push_back(new Estudiante_Cobra("Alberto", 23));
	blockchain.push_back(new Estudiante_Blockchain("David",20));
	blockchain.push_back(new Estudiante_Blockchain("Fernando", 20));
	blockchain.push_back(new Estudiante_Blockchain("Diego", 20));
	blockchain.push_back(new Estudiante_Blockchain("Daniel", 20));
	srand(time(0));
	while (opcion != 8) {
		cout << "1.Crear estudiante\n2.Modificar Estudiante\n3.Eliminar Estudiante\n4.Listar Estudiante\n5.Promover cinta del estudiante\n6.Degradar cinta del estudiante\n7.Simulacion\n8.Salir\n";
		cin >> opcion;
		switch (opcion) {
		case 1:
			crearestudiante(cobra,blockchain);
			break;
		case 2:
			modificarestudiante(cobra, blockchain);
			break;
		case 3:
			eliminarestudiante(cobra, blockchain);
			break;
		case 4:
			listarestudiante(cobra, blockchain);
			break;
		case 5:
			promoverestudiante(cobra, blockchain);
			break;
		case 6:
			degradarestudiante(cobra, blockchain);
			break;
		case 7:
			simulacion(cobra, blockchain);
			break;
		case 8:
			cout << "Buen dia";
			cobra.clear();
			blockchain.clear();
			break;
		default:
			cout << "Opcion no valida";
		}
	}
}
int main(){
	menu();
}