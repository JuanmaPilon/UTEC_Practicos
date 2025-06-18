#ifndef DEFINICIONES_H
#define DEFINICIONES_H


typedef char *cadena;

typedef struct nodo{
	cadena Titulo;
	nodo *sig;
}*pila;

pila creopila();

pila apilar(pila p, cadena nombre);

pila desapilar(pila p);

void mostrarpila(pila p);

cadena tope(pila p);

bool esVacia(pila p);

int CantidadLibros(pila p);

#endif
