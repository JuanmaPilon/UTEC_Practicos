#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int numeros[100],n,mayor=0,sumadetodos=0,masmayor=0;
	
	cout<<"Digite el numero de elementos del arreglo: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<i+1<<" - Digite un numero: "; //Va a mostrar 1 numero mas del arreglo no el 0 por ejemplo
		cin>>numeros[i];
		
		for(int i=0;i<n;i++){
			sumadetodos = numeros[i] + numeros[i-1];
		}
		
		
		if(numeros[i]>mayor){
			mayor = numeros[i];
		}
		if(numeros[i]>sumadetodos){
			masmayor = numeros[i];
		};
		
	}
	


	cout<<"El mayor elemento del arreglo es: "<<mayor<<endl;
	cout<<"El mayor que suma mas que en resto del arreglo es: "<<masmayor<<endl;
	
	return 0;
}

