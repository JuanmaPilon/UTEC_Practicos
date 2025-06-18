#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int *ptr = NULL;
	char confirma;
	
	
	do{
	ptr = new int;
	cout << "Ingrese un numero: ";
	cin >> *ptr;
	cout << "En la dirección " << ptr << " quedo el valor " << *ptr << endl;
	delete ptr;
	cout << "Desea continuar (s/n): ";
	cin >> confirma;
	}while(confirma == 's');
	cout << "Contenido del puntero al finalizar: "<< ptr << " apunta a " << *ptr<< endl;
	
	return 0;
}

