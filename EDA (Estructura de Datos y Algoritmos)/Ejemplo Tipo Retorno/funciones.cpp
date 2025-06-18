#include<iostream>
using namespace std;
#include "funciones.h"
#include "operacionesRetorno.h"
#include "definiciones.h"

lista Creo_Lista(){
	return NULL;
}

void Insertar_Nodo(lista &l, int v){
	lista n;
	n = new _nodo; //reservo espacio de memoria
	n->valor = v; //guardo el valor
	n->sig = l; //hago que su puntero apunte a lo que tenia por parametro
	l = n; //hago que el cabezal tome ese nuevo valor
}
	
void ImprimirResultado(int retorno){
	switch(retorno){
		case OK:
			cout << "Resultado: OK";
			break;
	case ERROR:
		cout << "Resultado: ERROR";
		break;
	case NO_IMPLEMENTADA:
		cout << "Resultado: NO_IMPLEMENTADA";
		break;
	}
	cout << endl << endl;
}
	
void Muestro_Lista(lista l){
	do{
		cout <<l->valor << " - ";
		l = l->sig;
	} while(l != NULL);
		cout << "FIN";
}
