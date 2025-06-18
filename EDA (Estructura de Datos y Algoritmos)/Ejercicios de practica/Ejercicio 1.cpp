#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int numeros[] = {1,2,3,4,5};
	int suma = 0;
	
	for(int i=0;i<5;i++){
		suma = suma + numeros[i];
	}
	
	cout<<"La suma de los elementos del vector es: "<<suma<<endl;
		
	return 0;
}

