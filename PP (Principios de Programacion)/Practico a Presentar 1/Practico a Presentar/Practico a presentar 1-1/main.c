#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0, suma=0,prom=0,cont=0;

    printf ("Ingrese un numero entero positivo y presione ENTER, si desea finalizar, por favor digite -1: ");
    scanf ("%d", &n);

    while (n>-1){
            suma=suma+n;
            cont++;
            printf ("\nIngrese otro numero: ");
            scanf ("%d", &n);
                }
                printf ("\n\nLa suma de numeros ingresados es :%d", suma);
                prom=suma/cont;
                printf ("\n\nEl promedio de los numeros ingresados es: %d\n\n", prom);
      return 0;
    }








