#include<iostream>
using namespace std;

int MCD (int a, int b);

int main (int argc, char *argv[]) {
	
	int a,b;
	while (b>a){
		cout << "Ingrese un numero entero, seguido de otro numero entero que sea menor al primero\n";
		cin >>  a;
		cin >> b;
	}
	MCD(a,b);
	cout << "El maximo comun divisor de los numeros ingresados es: " << MCD (a,b);
	
	return 0;
}

int MCD (int a, int b){
	
	int resultado = b;
	
	b=a%b;
	a=resultado;
	
	if(b==0){
		return resultado;
	}
	return MCD (a,b);
}
	
