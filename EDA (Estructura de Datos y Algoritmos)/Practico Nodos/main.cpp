#include "definicion.h"

int main (int argc, char *argv[]) {
	
	lista cabezalLista = crearLista();
	lista l = crearLista();
	
	cabezalLista = insertarNodo(cabezalLista, 4);
	cabezalLista = insertarNodo(cabezalLista, 6);
	cabezalLista = insertarNodo(cabezalLista, 4);
	
	if(esVacia(cabezalLista)){
		cout << "La lista esta vacia"<<endl;
	}else{
		mostrarListaIterativa(cabezalLista);
	}
	
	cout << "Muestro recursivo:"<<endl;
	mostrarListaRecursiva(cabezalLista);
	
	cout << "El primer valor es " << primero(cabezalLista) << endl;
	cout << "El ultimo valor es " << ultimoRecursivo(cabezalLista) << endl;
	cout << "El ultimo valor es ITERATIVO " << ultimoIterativo(cabezalLista) << endl;
	cout << "La cantidad de nodos es :" << cantidadNodos(cabezalLista) << endl;
	cout << "La suma de nodos es :" << sumaNodos(cabezalLista) << endl;
	
	//cout << "Eliminado :" << endl;
	//l = eliminoPrimer(cabezalLista);
	//cout << "El primer valor es " << primero(l) << endl;
	//cout << "El valor buscado esta en la pos: " << buscoValor(cabezalLista, 50) << endl;
	
//	l = insertarNodo(l, 4);
//	l = insertarNodo(l, 50);
//	l = insertarNodo(l, 7);
	
//	cout << "Listas iguales?: " << endl;
//	if(listasIguales(cabezalLista,l)){
//			cout << "Siiiiiiiii " << endl;		
//	}else{
//			cout << "Nope " << endl;
//	}
//	
	/*cout << "La cantidad de veces que esta ese num es: " << cantidadVeces(cabezalLista, 7) << endl;*/
	
	
	l = eliminar(cabezalLista, 6);
	cout << "Muestro recursivo:"<<endl;
	mostrarListaRecursiva(l);
	
	
	return 0;
}

