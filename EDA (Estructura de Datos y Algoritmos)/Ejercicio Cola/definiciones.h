#ifndef DEFINICIONES_H
#define DEFINICIONES_H

typedef char* Cadena;

typedef struct _cola{
	Cadena nombre;
	_cola *ptrSig;
}*Cola;

typedef struct _cabezalCola{
	Cola primero;
	Cola ultimo;
}CabezalCola;

CabezalCola encolar(Cola c, Cadena nombre);
CabezalCola desencolar(Cola c);
void verCola(CabezalCola c);
bool esVacio(CabezalCola c);


#endif
