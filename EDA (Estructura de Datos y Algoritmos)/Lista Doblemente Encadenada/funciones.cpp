#include<iostream>
using namespace std;
#include "estructura.h"
#include "prototipo.h"

cabezal CreoLista(){
	cabezal l;
	l.primero = NULL;
	l.ultimo = NULL;
	return l;
}
	
bool esVacia(cabezal l){
	if(l.primero == NULL || l.ultimo == NULL){
		return true;
	}
	else{
		return false;
	}
}
		

void mostrarListaPpioFin(cabezal l){
	while(!esVacia(l)){ //vamos a ir recorriendo mientras sea distinto de NULL
		cout << l.primero->dato << " - "; 
		l.primero = l.primero->sig;
	}
	cout << "Fin.";
}
	
void mostrarListaFinPpio(cabezal l){
	while(!esVacia(l)){ //vamos a ir recorriendo mientras sea distinto de NULL
		cout << l.ultimo->dato << " - "; 
		l.ultimo = l.ultimo->sig;
		}
		cout << "Fin.";
	}

cabezal insertoAlFrente(cabezal l,int valor){
	dobleLista nuevoNodo;
	nuevoNodo = new _nodo;
	nuevoNodo->dato = valor;
	nuevoNodo->ant = NULL;
	nuevoNodo->sig = l.primero;
	if(esVacia(l))}
		l.ultimo = nuevoNodo;
	{else{
		l.primero = nuevoNodo; //anterior del nodo que ya existe
		}
	l.primero = nuevoNodo; 
	return l;
}
		
cabezal insertoAlFInal(cabezal l,int valor){
			dobleLista nuevoNodo;
			nuevoNodo = new _nodo;
			nuevoNodo->dato = valor;
			nuevoNodo->sig = NULL; //no hay nadie atras
			nuevoNodo->ant = l.ultimo;
			if(esVacia(l))}
			l.primero = nuevoNodo;
			{else{
				l.ultimo = nuevoNodo; //siguiente del nodo que ya existe
			}
			l.ultimo = nuevoNodo; 
			return l;
		}


int primero (cabezal l){
				if(!esVacia(l){
					return l.primero->dato;
				}
			}
				
int ultimo (cabezal l){
				if(!esVacia(l){
					return l.ultimo->dato;
				}
			}
