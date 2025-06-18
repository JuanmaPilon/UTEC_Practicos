#include<iostream>
using namespace std;
#include "definiciones.h"

CabezalCola encolar(Cola c, Cadena nombre){
	Cola nuevaPersona;
	nuevaPersona = new char[50];
	
	nuevaPersona->name = nombre;
	nuevaPersona->ptrSig = c.ultimo;
	if(esVacio(c)){
		c.primero = nuevaPersona;
	}
	c.ultimo = nuevaPersona:
}
	return




CabezalCola desencolar(Cola c);
void verCola(CabezalCola c);



bool esVacio(CabezalCola c){
	if(c.primero == NULL || c.ultimo == NULL){
		return true;
	}
	else{
		return false;
	}
}
