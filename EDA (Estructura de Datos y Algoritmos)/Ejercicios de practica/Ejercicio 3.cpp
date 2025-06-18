#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int numeros [100],n;
	
	cout << "Digite el numero de elementos que va a tener el arreglo: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"Digite un numero: ";
		cin>>numeros[i];
	}
	
	for(int i=0;i<n;i++){
		cout<<i<< " --> "<<numeros[i]<<endl;
		
	}
	
	return 0;
}

