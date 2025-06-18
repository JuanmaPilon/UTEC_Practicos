#include<iostream>
using namespace std;
#include "definiciones.h"

int main (int argc, char *argv[]) {
	
	nodo cabezal = creo_vacia();
	
	cabezal = insertoPrincipio(cabezal,1);
	
	if(es_vacia(cabezal)){
		cout << "es vacia wn" << endl;
	}else{
			cout << "no es vacia wn" << endl;
		}
	
	
	
	
	return 0;
}

