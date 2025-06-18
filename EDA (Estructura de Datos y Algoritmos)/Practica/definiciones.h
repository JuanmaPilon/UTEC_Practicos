#ifndef DEFINICIONES_H
#define DEFINICIONES_H


typedef struct _nodo{
	int valor;
	_nodo *sig;
}*nodo;


// creo_vacia(l): esta funci�n devuelve la lista que recibe vac�a. 
nodo creo_vacia();
// es_vac�a(l): devuelve true si la lista es vac�a y false si no lo es.
bool es_vacia(nodo l);

//  insertoPrincipio(l,x): inserta un nuevo nodo al principio de la lista con el valor x.
nodo insertoPrincipio(nodo l,int x);

// primero(l): devuelve el valor del elemento en la primer posici�n de la lista.
//	Precondici�n: se puede utilizar esta operaci�n solo si l no es vac�a.
nodo primero(l);
#endif
