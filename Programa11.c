#include<stdio.h>
#include<conio.h>

int main()
{
    int nota1, nota2, nota3, promedio;
    printf("Ingrese primer nota: ");
    scanf("%i", &nota1);
    printf("Ingrese segunda nota: ");
    scanf("%i", &nota2);
    printf("Ingrese tercer nota: ");
    scanf("%i", &nota3);
    promedio =(nota1+nota2+nota3)/3;
    if (promedio>=7)
    {
        printf("Promcionado");
    }
    getch();
    return 0;
}
