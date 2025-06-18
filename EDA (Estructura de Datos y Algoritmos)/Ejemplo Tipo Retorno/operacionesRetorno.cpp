#include<iostream>
using namespace std;
#include "funciones.h"
#include "operacionesRetorno.h"
#include "definiciones.h"



TipoRetorno CreoLista(lista &l){ //recibe la direccion de memoria por REFERENCIA
	l = Creo_Lista();
	return OK;
}
TipoRetorno InsertarNodo(lista &l,int v){
	Insertar_Nodo(l, v);
	return OK;
}
TipoRetorno ElimnoNodo(lista l){
	return NO_IMPLEMENTADA;
}
TipoRetorno MuestroLista(lista &l){
	if (l == NULL){
		cout << "La lista se encuentra vacia ";
		return ERROR;
	}else{
		Muestro_Lista(l);
		return OK;
	}

}
