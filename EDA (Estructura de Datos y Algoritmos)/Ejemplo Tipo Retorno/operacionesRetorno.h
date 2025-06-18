#ifndef OPERACIONESRETORNO_H
#define OPERACIONESRETORNO_H
#include "definiciones.h"

//todos los encabezados de funciones

//pasaje POR REFERENCIA MODIFICA EL DATO y no una copia

TipoRetorno CreoLista(lista &l); //recibe cabezal de lista POR REFERENCIA
TipoRetorno InsertarNodo(lista &l,int v); //recibe cabezal de lista POR REFERENCIA y valor que quiero guardar
TipoRetorno EliminoNodo(lista &l); //recibe cabezal de lista POR REFERENCIA
TipoRetorno MuestroLista(lista l); //recibe cabezal de lista

#endif
