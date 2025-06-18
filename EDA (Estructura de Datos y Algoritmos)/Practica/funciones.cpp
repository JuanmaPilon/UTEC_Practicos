#include<iostream>
using namespace std;
#include "definiciones.h"

nodo creo_vacia(){
	return NULL;
}

bool es_vacia(nodo l){
	if(l == NULL){
		return true;
	}else{
		return false;
	}
}

nodo insertoPrincipio(nodo l, int x){
	nodo nuevo_nodo;
	nuevo_nodo = new _nodo;
	nuevo_nodo->valor = x;
	nuevo_nodo->sig = l;
	return nuevo_nodo;
}

nodo primero(nodo l){
	if(!es_vacia(nodo l){
		
	}
	
}
