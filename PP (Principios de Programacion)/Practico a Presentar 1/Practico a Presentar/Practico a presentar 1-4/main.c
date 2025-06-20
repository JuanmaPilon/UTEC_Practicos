#include <stdio.h>
#include <stdlib.h>

int main()
{

    char caracter;

    printf ("Ingrese una letra mayuscula, minuscula o caracter: ");
    scanf (" %c", &caracter);
    if  (caracter >96 && caracter<123) {
        caracter=caracter-32;
        printf (" \n %c\n", caracter);
    }
    else {
        if (caracter >64 && caracter<91) {
            caracter=caracter+32;
            printf (" \n %c\n", caracter);
        }
        else {
            printf (" \n ?\n");
        }
    }
    return 0;
}
