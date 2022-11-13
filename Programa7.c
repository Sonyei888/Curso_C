#include<stdio.h>
#include<conio.h>

main()
{
    int cantidad;
    float precio, importe;
    printf("Ingrese el precio del articulo: ");
    scanf("%f", &precio);
    printf("Ingrese la cantidad de articulos: ");
    scanf("%i", &cantidad);
    importe = precio*cantidad;
    printf("El importe total a pagar es: ");
    printf("%f", importe);
    getch();
    return 0;
}
