#ifndef ESTRUCTURA_H
#define ESTRUCTURA_H

typedef struct _nodo{
	int dato;   //armo el tipo de dato
	_nodo *ant; //puntero al anterior
	_nodo *sig; //puntero al siguiente
}; *doblelista //puntero doblelista

typedef struct _cabezal{
	doblelista primero; //primer cabezal, apunta al primero
	doblelista segundo; //segundo cabezal, apunta al ultimo
}; cabezal; //es una variable que guarda 2 punteros, pero no es un puntero

#endif
