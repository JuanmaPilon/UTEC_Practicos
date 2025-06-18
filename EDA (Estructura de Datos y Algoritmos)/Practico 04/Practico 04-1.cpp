#include <iostream>

#define CANT 5

using namespace std;



int ocurrenciarecu(int arreglo[],int x,int num);

int ocurrencia(int arreglo[],int num);



int main(int argc, char *argv[]) {
	
	int num,x=0;
	
	int arreglo[CANT]={1,3,4,3,7};
	
	cout<<"ingrese un numero: ";
	
	cin>>num;
	
	cout<<"la cantidad de ocurrencias es: "<<ocurrenciarecu(arreglo,x,num);
	
	cout<<"\n sin funcion de recurencia: "<<ocurrencia(arreglo,num);
	
	return 0;
	
}





int ocurrenciarecu(int arreglo[],int x,int num){
	
	if(x<CANT){
		
		if(arreglo[x]==num){
			
			return 1+ocurrenciarecu(arreglo,x+1,num);
			
		}
		
		else{
			
			
			
			return ocurrenciarecu(arreglo,x+1,num);
			
		}
		
	}
	
	else{
		
		return 0; // caso base 
		
	}
	
}
	
	
	
	int ocurrencia(int arreglo[],int num){
		
		int i,total;
		
		total=0;
		
		for(i=0;i<CANT;i++){
			
			if(arreglo[i]==num){
				
				total++;
				
			}
			
		}
		
		return total;
		
	}
		
