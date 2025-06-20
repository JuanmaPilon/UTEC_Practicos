#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numero, n,n2;
   char caracter;

   printf ("Ingrese un numero entero mayor a 0 y presione ENTER: ");
   scanf ("%d", &numero);
   printf ("\nIngrese un caracter y presione ENTER: ");
   scanf (" %c", &caracter);
   n=0;
   n2=1;

    while(n<numero){
                            while(n2>0){
                                        printf("%c",caracter);
                                        n2--;
                                        }
                    printf("\n");
                    n++;
                    n2=n+1;
                    }

return 0;
}
