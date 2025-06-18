#include<iostream>
using namespace std;
#include "definiciones.h"


int main (int argc, char *argv[]) {
	
	pila libros;
	cadena nombre;
	nombre = NULL;
	libros = creopila();
	mostrarpila(libros);
	cout<<endl;
	
	cout << "Ingrese titulo del libro: ";
	nombre = new char[50];
	cin.getline(nombre,50);
	libros=apilar(libros,nombre);
	cout << "Ingrese titulo del libro: ";
	nombre = new char[50];
	cin.getline(nombre,50);
	libros=apilar(libros,nombre);
	cout << "Ingrese titulo del libro: ";
	nombre = new char[50];
	cin.getline(nombre,50);
	
	libros=apilar(libros,nombre);
	
	cout << "Cantidad de libros" << CantidadLibros(libros) << endl;
	
	cout << "Titulo del primer libro: " << tope(libros) << endl;
	libros=desapilar(libros);
	cout << "Titulo del primer libro: " << tope(libros) << endl;
	
	return 0;
}

