#ifndef FUNCIONES_H
#define FUNCIONES_H
#include "definiciones.h"

lista Creo_Lista(); //creo la nueva lista

void Insertar_Nodo(lista &l, int v); //inserta un nuevo valor a la lista al principio

lista Elimino_Nodo(lista &l); //eliminar el primer nodo de la lista

void Muestro_Lista(lista l); //muestro a lista

void ImprimirResultado(int retorno); //muestra los resultados de los retornos

#endif
