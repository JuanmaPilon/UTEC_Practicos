#include <iostream>
using namespace std;

typedef char* cadena;

typedef struct _fecha {
	int dia;
	cadena mes;
	int anio;
}*fecha;


int main(int argc, char *argv[]) {
	fecha ptrFecha;
	ptrFecha = new  _fecha; //Reserve un nuevo espacio en memoria para almacenar la estructura.
	ptrFecha->mes = new char; //Reserva espacio en memoria para almacenar la cadena de caracteres.
	cout << "Ingrese Dia: ";
	cin >> ptrFecha->dia;
	cout << "Ingrese Mes: ";
	cin >> ptrFecha->mes;
	cout << "Ingrese Año: ";
	cin >> ptrFecha->anio;
	cout << "La fecha ingresada es: "<<ptrFecha->dia << "/"<<ptrFecha->mes<<"/"<<ptrFecha->anio;
	return 0;
}
