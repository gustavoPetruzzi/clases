#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int main()
{
    int userNumbers[4];
    int i;
    int flagMaxMin = 1;
    int max;
    int min;
    float totalSum = 0;
    float promedio;
    char respuesta;

    for(i = 0; i<MAX; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&userNumbers[i]);
    }

    for(i = 0; i<MAX; i++)
    {
        printf("Indice: %d\nValor: %d\n\n", i, userNumbers[i]);
    }

    for(i = 0; i<MAX; i++)
    {
        if(flagMaxMin ==1)
        {
            max = userNumbers[i];
            min = userNumbers[i];
            flagMaxMin = 0;
        }

        if(userNumbers[i]>max)
        {
            max = userNumbers[i];
        }
        if(userNumbers[i]< min)
        {
            min = userNumbers[i];
        }
    }

    for(i= 0; i<MAX; i++)
    {
        totalSum = totalSum + userNumbers[i];
    }
    promedio = totalSum / MAX;
    printf("El promedio es: %.2f\n", promedio);
    printf("el numero maximo es: %d\nel numero minimo es: %d", max, min);

    printf("\nDesea modificar algo?");
    scanf(" %c",& respuesta);
    switch(respuesta)
    {
        case 's':
            printf("Indice a modificar");
            scanf("%d", &i);

            printf("Valor a modificar");
            scanf( "%d", & userNumbers[i]);
            printf("Indice: %d\nValor: %d\n\n", i, userNumbers[i]);
            break;
        case 'n':
            break;
        default:
            printf("ERROR.");
            break;
    }
    return 0;
}
