#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int numeros[] = {1,2,3,4,5};
	int multiplicacion = 1;
	
	for (int i=0;i<5;i++){
		multiplicacion = multiplicacion * numeros[i];
	}
	
	cout<<"La multiplicacion de los elementos del vector es: "<<multiplicacion<<endl;
	
	
	return 0;
}

