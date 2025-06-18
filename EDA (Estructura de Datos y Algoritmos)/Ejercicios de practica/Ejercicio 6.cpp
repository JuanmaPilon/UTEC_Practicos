#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int numeros[100],n,mayor=0;
	
	cout<<"Digite el numero de elementos del arreglo: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<i+1<<" - Digite un numero: "; //Va a mostrar 1 numero mas del arreglo no el 0 por ejemplo
		cin>>numeros[i];
		
		if(numeros[i]>mayor){
			mayor = numeros[i];
		}
	}
	
	cout<<"El mayor elemento del arreglo es: "<<mayor<<endl;
	
	return 0;
}

