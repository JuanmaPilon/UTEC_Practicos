#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int arreglo[]={52,36,24,36,48};
	
	int *ptr=NULL;
	
	// ptr= &arreglo[0]; // ptr = arreglo;
	ptr = arreglo;
	
	cout << *ptr << "  -  " << ptr << endl;
	cout << *(ptr+4) << "  -  " << ptr+4 << endl;
	return 0;
}

