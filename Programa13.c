#include<stdio.h>
#include<conio.h>

int main()
{
    int nota1, nota2, nota3, prom;
    printf("Ingrese primer nota: ");
    scanf("%i", &nota1);
    printf("Ingrese segunda nota: ");
    scanf("%i", &nota2);
    printf("Ingrese tercer nota: ");
    scanf("%i", &nota3);
    prom=(nota1+nota2+nota3)/3;
    if(prom>=7)
    {
        printf("Promocionado");
    }
    else
    {
        if(prom>=4)
        {
            printf("Regular");
        }
        else
        {
            printf("Reprobado");
        }
    }
    getch();
    return 0;
}
