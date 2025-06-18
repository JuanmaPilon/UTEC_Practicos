#include<iostream>
using namespace std;
#include "definiciones.h"


pila creopila(){
	return NULL;
}

pila apilar(pila p, cadena nombre){
	pila nuevolibro;
	nuevolibro = new nodo;
	nuevolibro->Titulo=nombre;
	nuevolibro->sig=p;
	return nuevolibro;
}

pila desapilar(pila p){
	pila aux=p;
	p=p->sig;
	delete aux;
	return p;
}

void mostrarpila(pila p){
	if(esVacia(p)){
		return;
	}
	else{
			cout << p->Titulo << endl;
			mostrarpila(p->sig);
		}
}

cadena tope(pila p){
	return p->Titulo;
}

bool esVacia(pila p){
	if(p==NULL){
		return true;
	}
	else{
		return false;
	}
}

int CantidadLibros(pila p){
	int contador=0;
	while(!esVacia(p)){
		contador++;
		p=p->sig;
	}
	return contador;
}
