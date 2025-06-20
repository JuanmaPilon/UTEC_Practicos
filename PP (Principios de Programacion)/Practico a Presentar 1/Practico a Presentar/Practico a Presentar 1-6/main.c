#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n1, n2, n3;
    int suma,n6,n7,n8;

    printf ("Ingrese un numero de 3 digitos: ");
    scanf ("%c", &n1);
    scanf ("%c", &n2);
    scanf ("%c", &n3);
    printf ("\nNumero ingresado (OCTAL): %c", n1);
    printf ("%c", n2);
    printf ("%c\n", n3);
    n6=n1-48;
    n7=n2-48;
    n8=n3-48;
    suma=64*n6+8*n7+n8;
    printf ("\nNumero ingresado (DECIMAL): %d\n", suma);

    return 0;
}
