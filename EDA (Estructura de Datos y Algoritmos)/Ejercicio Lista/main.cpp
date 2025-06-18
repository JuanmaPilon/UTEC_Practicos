#include<iostream>
using namespace std;
#include"definiciones.h"

int main (int argc, char *argv[]) {
	lista cabezalLista;
	cabezalLista = crearLista();//cabezalLista=NULL;
// llamados por valor, se copian los datos en los parámeros
	
	cabezalLista = insertNalPrin(cabezalLista,18);
	cabezalLista = insertNalPrin(cabezalLista,50);
	cabezalLista = insertNalPrin(cabezalLista,7);
	
	if(esVacia(cabezalLista)){
		cout << "Lista esta Vacia." << endl;		
	}
	else{
		mostrarListaIterativa(cabezalLista);
	}
	cout << "Muestro Recursivo: ";
	mostrarListaRecursiva(cabezalLista);

	cout << "El primer valor es: " << primero(cabezalLista) << endl;
	cout << "El ultimo valor es (Itera): " << ultimoItera(cabezalLista) << endl;
	cout << "El ultimo valor es (Recu): " << ultimoRecu(cabezalLista) << endl;
	
	cout << "Total de nodos: " << cantNodos(cabezalLista) << endl;
	return 0;
}
