#include<iostream>
using namespace std;
#include"definiciones.h"

//desarrollar las implementaciones
lista crearLista(){
	return NULL;
}

bool esVacia(lista l){
	if(l == NULL){
		return true;
	}
	else{
		return false;
	}
}
//insertar nodo al principio
lista insertNalPrin(lista l,int nro){
	lista nuevoNodo;
	nuevoNodo = new nodo; //nuevoNodo = new struct nodo;
	nuevoNodo->valor = nro;
	nuevoNodo->ptrSig = l;
	return nuevoNodo;
}

void mostrarListaIterativa(lista l){
	cout << "Muestro Iterativo: ";
	while (!esVacia(l)){
		cout << l->valor << " - ";
		l = l->ptrSig;
	}
	cout << "Fin." << endl;
}
	
void mostrarListaRecursiva(lista l){
	if(esVacia(l)){
		cout << "Fin." << endl;
		return;
	}
	else{
		cout << l->valor << " - ";
		mostrarListaRecursiva(l->ptrSig);
	}
}
//devuelve el 1er elemento de la lista
//precondición: la lista NO es vacía	
int primero(lista l){
	return l->valor;
}
//devuelve el último elemento de la lista
//precondición: la lista NO es vacía
int ultimoItera(lista l){
	while(!esVacia(l->ptrSig)){
		l=l->ptrSig;
	}
	return l->valor;
}
int ultimoRecu(lista l){
	if(esVacia(l->ptrSig)){
		return l->valor;
	}
	else{
		return ultimoRecu(l->ptrSig);
	}
}
//devuelve la cantidad de nodos de una lista
//en caso de estar vacía, devuelve 0
int cantNodos(lista l){
	int cont=0;
	while (!esVacia(l)){
		cont++;
		l = l->ptrSig;
	}
	return cont;
}
