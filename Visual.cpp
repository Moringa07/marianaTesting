#include <iostream>
#include "Visual.h"

using namespace std;
// Todas las funciones
Visual::Visual(){};
void Visual::limpiar_pantalla() {
	system("cls");
};

int Visual::menu() {
	int op;
	cout<<"--B U S C A M I N A S--"<< "\n";
	cout<<"1)--> Nueva Partida. ";
	cout<<"2) --> Renaudar Partida guardada. ";
	cout<<"3) --> Salir del juego. ";
	cout<<"--Seleccione una opcion para iniciar: ";
	cin >> op;

    // Verificar si la entrada es válida
    while (op < 1 || op> 3) {
        cout << "Opción inválida. Seleccione nuevamente: ";
        cin >> op;
    }
    
	return op;
};



