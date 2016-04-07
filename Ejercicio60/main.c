#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int main()
{
    int i;
    int j;
    int userNumbers[MAX];
    int flagMax=1;
    int maxNumber;
    int aux;

    for(i=0; i<MAX; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &userNumbers[i]);

        if(flagMax == 1)
        {
            maxNumber = userNumbers[i];
            flagMax = 0;
        }
        else if(userNumbers[i]> maxNumber)
        {
            maxNumber = userNumbers[i];
        }
    }

    for(i = 0; i<MAX; i++)
    {
        printf("\nindice: %d\nvalor:  %d\n\n", i, userNumbers[i]);
    }
    printf("El numero maximo es: %d", maxNumber);

    for(i = 0; i<MAX-1; i++)
    {
        for(j = i+1; j<MAX; j++ )
        {
            if(userNumbers[i]<userNumbers[j])
            {
                aux = userNumbers[i];
                userNumbers[i] = userNumbers[j];
                userNumbers[j] = aux;
            }
        }
    }
    printf("\n\t\t\t Array ordenado\n");
    for(i= 0; i<MAX; i++)
    {
        printf("%d\n",userNumbers[i]);
    }
    return 0;
}
