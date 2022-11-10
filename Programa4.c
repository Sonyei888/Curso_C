#include<stdio.h>
#include<conio.h>

main ()
{
    int lado, perimetro;
    printf("Ingrese el lado del cuadrado;");
    scanf("%i", &lado);
    perimetro = lado * 4;
    printf("El perimetro del cuadrado es:");
    printf("%i", perimetro);
    getch();
}
