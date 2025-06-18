#ifndef DEFINICIONES_H
#define DEFINICIONES_H

typedef struct _nodo{ //estructura del nodo
	int valor; //tiene un valor entero
	struct _nodo *sig; //un puntero a nuestro siguiente nodo
} *lista;

typedef enum _retorno{ //enum tipo dato estructurado, asocia a diferentes valores un valor numerico
	OK, ERROR, NO_IMPLEMENTADA
} TipoRetorno;

#endif
