#ifndef DEFINICIONES_H
#define DEFINICIONES_H


typedef struct _nodo{
	int valor;
	_nodo *sig;
}*nodo;


// creo_vacia(l): esta función devuelve la lista que recibe vacía. 
nodo creo_vacia();
// es_vacía(l): devuelve true si la lista es vacía y false si no lo es.
bool es_vacia(nodo l);

//  insertoPrincipio(l,x): inserta un nuevo nodo al principio de la lista con el valor x.
nodo insertoPrincipio(nodo l,int x);

// primero(l): devuelve el valor del elemento en la primer posición de la lista.
//	Precondición: se puede utilizar esta operación solo si l no es vacía.
nodo primero(l);
#endif
