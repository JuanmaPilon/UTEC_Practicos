#include "definicion.h"

lista crearLista(){   //Inicializar cabezal de la lista
return NULL;
};

bool esVacia(lista l){
	if(l==NULL){
		return true;
	}else{
		return false;
	}
}

lista insertarNodo(lista l, int nro){ //Función por tener return //insertar nodo al principio
	lista nuevoNodo;
	nuevoNodo = new struct nodo; //new nodo;
	nuevoNodo->valor = nro;
	nuevoNodo->ptrSig = l; //Al nuevo nodo le copio la dir de cabezal (l).

	return nuevoNodo;
}

void mostrarListaIterativa(lista l){ //procedimiento por ser void
	cout << "Muestro iterativo:"<<endl;
	while(!esVacia(l)){
		cout << l->valor << " - " << endl;
		l = l->ptrSig;
	}
	cout << "Fin" << endl;
}

void mostrarListaRecursiva(lista l){
	if(esVacia(l)){
		cout << "Fin" << endl;
		return;	
	}else{
		cout << l->valor << " - " << endl;
		mostrarListaRecursiva(l->ptrSig);
	}
}
	
int primero(lista l){ //devuelve el primer elemento de la lista
//precondición: la lista NO es vacía
return l->valor;
}


int ultimoIterativo(lista l){
	//Devuelve el último elemento de la lista
	//precondición: la lista NO es vacía
	if(esVacia(l->ptrSig)){
		return l->valor;
	}else 
		ultimoIterativo(l->ptrSig);
	}

int ultimoRecursivo(lista l){
	//Devuelve el último elemento de la lista
	//precondición: la lista NO es vacía
	while(!esVacia(l->ptrSig)){
		l = l->ptrSig;
		}
	return l->valor;
}

int cantidadNodos(lista l){ //Devuelve la cant de nodos de una lista
	//En caso de estar vacía devuelve 0
	int cont=0;
	
	while(!esVacia(l)){
		cont = cont + 1;
		l = l->ptrSig;
	}
	return cont;
}

	//SumaNodos Devuelve la suma total del contenido de los nodos de la lista

int sumaNodos(lista l){  //Devuelve la suma total del contenido de los nodos de la lista
	//En caso de estar vacia, devuelve 0	
	int suma=0;
	
	while(!esVacia(l)){
		suma = suma + l->valor;
		l = l->ptrSig;
	}
	return suma;
}
	

lista eliminoPrimer(lista l){//Elimino primer nodo de la lista, devolviendo la lista sin el
	//Precondicion: la lista no esta vacia 
	lista aux = l;
	l = l->ptrSig;
	delete aux;
	return l;
}
	
	
int buscoValor(lista l, int num){ //Devuelve la ubicacion del valor buscado
	//En caso de no existir, devuelve 0
	int cont = 0;
	int pos = 0;
	while(!esVacia(l) && estaValor){
		cont = cont + 1 ;
		if(num == l->valor){
			pos = cont;
		}
		l = l->ptrSig;
	} 
	return pos;
}

bool estaValor(lista l, int num){ //Escribir una función que verifique si un elemento x se encuentra en una lista l. 
	
	bool esta = false;
	
	while(!esVacia(l)){
		if(num == l->valor){
			esta = true;
			l = NULL;
		}else{
		l = l->ptrSig;
		}
	} 
	return esta;
}
	
	bool estaValor2(lista l, int num){ //Escribir una función que verifique si un elemento x se encuentra en una lista l. 
		
		bool esta = false;
		
		while(!esVacia(l) && !esta){
			if(num == l->valor){
				esta = true;
			}else{
				l = l->ptrSig;
			}
		} 
		return esta;
	}
	
	
	
	
//Escribir una función que verifique si dos listas son iguales (mismos elementos en el mismo orden). 

bool listasIguales(lista lista1, lista lista2){
	
	bool iguales = false;
	
	if(esVacia(lista1) && esVacia(lista2)){
		iguales = true;
		//return iguales;
	}else{
		
		while(cantidadNodos(lista1)==cantidadNodos(lista2) && !esVacia(lista1)){
			if(lista1->valor == lista2->valor){
				iguales = true;
				lista1 = lista1->ptrSig;
				lista2 = lista2->ptrSig;
			}else{
				return false;
			}
		} 
	}
		return iguales;
}

	
int cantidadVeces(lista l, int num){ //Escribir  una  función  que  cuente  la  cantidad  de  ocurrencias  de  un  elemento  x 
	int cant=0;
		
	while(!esVacia(l)){
			
		if(num == l->valor){
			cant = cant + 1;
		}
		l = l->ptrSig;
	}
	return cant;
}
	
	

	
lista eliminar(lista l, int x){  //Escribir  una  función  que  elimine  el  elemento  x  de  la  lista  l  (debe  borrar  todas  las ocurrencias de ese elemento)
	
	if(estaValor(l,x)){        //Para saber si esta el num buscado
		lista aux = l;
		lista ant = NULL;
		while(!esVacia(aux)){		
			if(aux->valor==x){
				if(esVacia(ant)){		//si es el primero de la lista
					l = aux->ptrSig;
				}else{					//Si no es el primer nodo
					ant->ptrSig = aux->ptrSig;
				}
				delete aux;
				if(esVacia(ant)){
					
					aux = l;
				}else{
					aux = ant->ptrSig;
				}
			}else{
				ant = aux;
				aux = aux->ptrSig;
			}
		}
	}
	return l;
}
	
	//Escribir una función que ordene una lista l.
	void ordenoLista(lista l){
		
		lista anterior;
		lista aux;
		lista siguiente;
		aux = new nodo;
		anterior = l;
		
		while(anterior!=NULL){
			siguiente = l->ptrSig;
			while(siguiente != NULL){
				if(anterior->valor > siguiente->valor){
					aux->valor = anterior->valor;
					anterior->valor = aux->valor;
				}
				siguiente = siguiente->ptrSig;
			}
			anterior = anterior->ptrSig;
		}
	}
	
	
	
	
	
	
	
	
	
