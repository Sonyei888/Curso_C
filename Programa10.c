#include<stdio.h>
#include<conio.h>

int main()
{
    int num1, num2, suma, producto, division, diferencia;
    printf("Ingrese el primer valor: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &num2);
    if(num1>num2){
        suma=num1+num2;
        diferencia=num1-num2;
        printf("La suma de los dos valores: ");
        printf("%i", suma);
        printf("\n");
        printf("La diferencia de los dos valores: ");
        printf("%i", diferencia);
    }
    else
    {
        producto = num1*num2;
        division = num1/num2;
        printf("El producto de los dos valores es: ");
        printf("%i", producto);
        printf("\n");
        printf("La division de los dos valores es: ");
        printf("%i", division);
    }
    getch();
    return 0;
}
