#ifndef DEFINICIONES_H
#define DEFINICIONES_H

typedef struct nodo
{
	int valor;
	nodo *ptrSig; //puntero a la estructura
	//*ptrSig; puntero al siguiente
}*lista; // alias de la estructura, con el que creo el cabezal, y las variables Auxiliares

// nodo es la estructura, defino un tipo de dato de esa estructura, al que llamo *lista
// con lista se definen los par�metros, y las funciones, definidas por la estructura
// el alias evita que tengas que utilizar todo el nombre de la estructura

lista crearLista();
// es una funci�n que retorna el valor NULL, se utiliza solo al comienzo
// detipo lista(puntero) hago que el puntero apunte a NULL
bool esVacia(lista l);
// recibe como par�metro la lista
lista insertNalPrin(lista l,int nro);
// lista l es el cabezal de la lista
// insertar nodo al principio de la lista
// devuelve la lista
void mostrarListaIterativa(lista l);
// recibe al cabezal como par�metro

void mostrarListaRecursiva(lista l);

int primero(lista l);
//devuelve el 1er elemento de la lista
//precondici�n: la lista NO es vac�a

int ultimoItera(lista l);
int ultimoRecu(lista l);
//devuelve el �ltimo elemento de la lista
//precondici�n: la lista NO es vac�a

int cantNodos(lista l);
//devuelve la cantidad de nodos de una lista
//en caso de estar vac�a, devuelve 0

#endif
