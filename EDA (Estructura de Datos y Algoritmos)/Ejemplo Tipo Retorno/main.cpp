#include<iostream>
using namespace std;
#include "funciones.h"
#include "operacionesRetorno.h"
#include "definiciones.h"




int main (int argc, char *argv[]) {
	
	//defino variables
	TipoRetorno retorno; //defino una variable de tipoRetorno, aca guardo almacenar las opciones de tipo de dato enum
	lista l; //creo cabezal de mi lista, es un puntero
	
	/*retorno = CreoLista(l); //guardo el resultado de la funcion CreoLista*/
	/*cout << retorno << endl;*/
	/*ImprimirResultado(retorno);*/
	/*se puede hacer de esta manera o de la siguiente:*/
	cout << "Creo Lista: ";
	ImprimirResultado(CreoLista(l));//uso una funcion dentro de otra funcion sin crear variable auxiliar
	cout << "Inserto nuevo nodo a la lista con el valor 5: ";
	ImprimirResultado(EliminoNodo(l));
	ImprimirResultado(InsertarNodo(l,5));
	return 0;
}

