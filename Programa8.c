#include<stdio.h>
#include<conio.h>

int main()
{
    float sueldo;
    printf("Ingrese el sueldo: ");
    scanf("%f", &sueldo);
    if(sueldo>3000){
        printf("Esta persona debe abonar impuesto ");
    }
    getch();
    return 0;
}
