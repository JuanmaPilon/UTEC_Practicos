#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int variable;
	int *ptrvariable = NULL;
	
	
	
	
	variable = 5;
	cout << "CONTENIDO DE LA VARIABLE: "<< variable<< " SE ENCUENTRA EN LA DIRECCION: "<< &variable <<endl;
	
	ptrvariable = &variable; //asociar al puntero la direccion de memoria de la variable
	
	
	cout << "CONTENIDO DEL PUNTERO: " << ptrvariable<< " APUNTA A "<< *ptrvariable<<endl;
	
	
	return 0;
}

