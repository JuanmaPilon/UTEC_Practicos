#include <stdio.h>
#include <stdlib.h>

int main()
{
   int rep,contador,n,ng,contadorn;

   contador=0;
   ng=0;
   contadorn=1;

   printf ("Ingrese la cantidad de repeticiones, y presione ENTER (puede ser 0 o mayor que 0):  ");
   scanf ("%d", &rep);

   if (rep<=0) {
                 printf("\nNO SE INGRESARON NUMEROS\n");
     }
                 else   {
                          while (contador<rep) {  printf ("\n\nIngrese numero %d: ", contadorn);
                                                scanf ("%d", &n);
                                                contadorn++;
                                if (n>0) {

                                    contador++;
                                  }

                                    if (n>ng) {
                                                        ng=n;
                                      }
                               }
printf ("\nEl numero mas alto es: %d\n", ng);

                    }


}
