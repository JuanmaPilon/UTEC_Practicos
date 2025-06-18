#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int numero [100],n;
	cout<<"Digite el numero de elementos que va a tener el arreglo: "<<endl;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"Digite un numero: ";
		cin>>numero[i];
	}
	
	for(int i=n;i>0;i--){
		cout<<i-1<<" --> " <<numero[i-1]<<endl;
	}
	
	return 0;
}

