#include <iostream>

using namespace std;



void muestroArrayRecursivo(int arreglo[],int n);

int main(int argc, char *argv[]) {
	
	int n = 0;
	int arreglo [5];
	arreglo[0]=4;
	arreglo[1]=5;
	arreglo[2]=9;
	arreglo[3]=2;
	arreglo[4]=9;
	
	muestroArrayRecursivo(arreglo, n);
	
	return 0;
	
}



void muestroArrayRecursivo (int arreglo[],int n){
	
	cout << arreglo [n] << " - ";
	
	if(n==4){
		
		return;
		
	}
	
	muestroArrayRecursivo(arreglo, n+1);
	
}
	
