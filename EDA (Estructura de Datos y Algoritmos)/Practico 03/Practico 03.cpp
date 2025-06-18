#include <iostream>
#include <cstring>
#define STUDENT 25
using namespace std;

typedef struct datos {
	char nombre[STUDENT];
	int nota;
}datos;

datos Ingreso (datos EstudianteN);
void Promedio (datos Estudiante[]);
void MayorN (datos Estudiante[]);
void MenorN (datos Estudiante[]);
void Insuficiente (datos Estudiante[]);
void Suficientes (datos Estudiante[]);

int main(int argc, char *argv[]) {
	int n = 0;
	int opcion;
	datos EstudianteN;
	datos Estudiante[10];
	
	do{	
		opcion = 0;
		system("CLS");
		cout<<"MENU PRINCIPAL\n";
		cout << "Ingrese una opcion (1-7):\n";
		cout << "1-Ingresar Estudiantes y Notas\n";
		cout << "2-Promedio\n";
		cout << "3-Mayor nota\n";
		cout << "4-Menor nota\n";
		cout << "5-Notas insuficientes\n";
		cout << "6-Notas suficientes\n";
		cout << "7-Salir\n\n";
		cin >> opcion;
		switch(opcion) {
		case 1:
			
			for(n = 0;n<10;n++){				
				Estudiante[n] = Ingreso (EstudianteN);
			}
			break;
		case 2:
			Promedio(Estudiante);
			system("pause");
			break;
		case 3:
			MayorN(Estudiante);
			system("pause");
			break;
		case 4:
			MenorN(Estudiante);
			system("pause");
			break;
		case 5:
			Insuficiente(Estudiante);
			system("pause");
			break;
		case 6:
			Suficientes(Estudiante);
			system("pause");
			
			break;
		case 7:
			break;
		default:
			cout<<"Opcion invalida";
		}
	} while( (opcion>0 && opcion<7) || opcion>7);
	return 0;
}

datos Ingreso (datos EstudianteN){
	cout << "Ingrese nombre (sin espacios)\n";
	cin >> EstudianteN.nombre;
	do{
		cout << "Ingrese una nota (1-5)\n";
		cin >> EstudianteN.nota;
	} while(EstudianteN.nota<1 || EstudianteN.nota>5 );
	return EstudianteN;
}
	void Insuficiente (datos Estudiante[]){
		int insufi = 0;
		int i = 0;
		for(i = 0;i<10;i++){
			if(Estudiante[i].nota<3){
				insufi++;
			}
		}		
		cout <<"La cantidad de estudiantes insuficientes es: \n"<< insufi << "\n";
	}
		void Suficientes (datos Estudiante[]){
			int sufi = 0;
			int i = 0;
			for(i =0;i<10;i++){
				if(Estudiante[i].nota > 2){
					sufi++;
				}
			}		
			cout <<"La cantidad de estudiantes suficientes es: \n"<< sufi << "\n";
		}
			
			void Promedio (datos Estudiante[]){
				int notapromedio = 0;
				int i = 0;
				notapromedio = Estudiante[0].nota;
				for(i=1;i<10;i++){
					notapromedio = notapromedio + Estudiante[i].nota;
				}
				notapromedio = notapromedio / 10;
				cout <<"El Promedio es: \n"<< notapromedio<< "\n";
			}
				void MayorN (datos Estudiante[]){
					int mayor = 0;
					char n1 [STUDENT];
					char n2 [STUDENT];
					int i = 0;
					for(i = 0 ; i < 10 ; i++){
						if(Estudiante[i].nota > mayor){
							strcpy(n1, Estudiante[i].nombre);
							mayor = Estudiante[i].nota;
						}
					}
					strcpy(n2, "1");
					for(i=0;i<10;i++){
						if(Estudiante[i].nota == mayor && Estudiante[i].nombre != n1){
							strcpy(n2, Estudiante[i].nombre);
							mayor = Estudiante[i].nota;
						}
					}
					cout <<"La mayor nota fue: "<< mayor << "\nLa obtuvo: " << n1 << "\n";
					if (strcmp(n2, "1")){
						cout << n2 << " obtuvo la misma nota" << "\n";
					}
				}
					
					void MenorN (datos Estudiante[]){
						int menor = 0;
						char n1 [STUDENT];
						char n2 [STUDENT];
						int i = 0;
						menor = Estudiante[0].nota;
						for(i=1;i<10;i++){
							if(Estudiante[i].nota < menor){
								strcpy(n1, Estudiante[i].nombre);
								menor = Estudiante[i].nota;
							}
						}
						strcpy(n2, "1");
						for(i = 0 ; i < 10 ; i++){
							if(Estudiante[i].nota == menor && Estudiante[i].nombre != n1){
								strcpy(n2, Estudiante[i].nombre);
								menor = Estudiante[i].nota;
							}
						}
						cout <<"La menor nota fue: "<< menor << "\nLa obtuvo: \n" << n1 << "\n";
						if (strcmp(n2, "1")){
							cout << n2 << " tambien obtuvo esa nota" << "\n";
						}
					}
						
