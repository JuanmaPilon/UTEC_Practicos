#include<iostream>
using namespace std;

typedef struct nodo{
	int valor;
	nodo *ptrSig;
}*lista;

lista crearLista();

bool esVacia(lista l);

lista insertarNodo(lista l, int nro);

void mostrarListaIterativa(lista l);

void mostrarListaRecursiva(lista l);

int primero(lista l);

int ultimoIterativo(lista l);

int ultimoRecursivo(lista l);

int cantidadNodos(lista l);

int sumaNodos(lista l); 

lista eliminoPrimer(lista l);

int buscoValor(lista l, int num);

bool estaValor(lista l, int num);

bool estaValor2(lista l, int num);

bool listasIguales(lista lista1, lista lista2);

int cantidadVeces(lista l, int num);

lista eliminar(lista l, int x);

void ordenoLista(lista l);
