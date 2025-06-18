#ifndef PROTOTIPO_H
#define PROTOTIPO_H
#include "estructura.h"


cabezal creolista();
bool esVacia(cebezal l); //retorna true si la lista es vacía, sino retorna false
int primero(cabezal l); //retorna el dato que esta en el primer nodo de la lista
int ultimo(cabezal l); // retorna el dato que esta en el ultimo nodo de la lista
cabezal insertoAlFrente(cabezal l,int valor); //retorna la lista con un nuevo nodo al principio
cabezal insertoAlFinal(cabezal l, int valor; //retorna la lista con un nuevo nodo al final
cabezal borrarAlFrente(cabezal l); //retorna una lista sin el primer nodo
cabezal borrarAlFinal(cabezal l); //retorna una lista sin el ultimo nodo
void mostrarListaPpioFin(cabezal l); //muestra lista de izquierda a derecha
void mostrarListaFinPpio(cebzal l); //muestra lista de derecha a izu


#endif
