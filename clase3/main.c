#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi    3.14
float returnNumber(void);
float calcularArea(float);

int main()
{
    float areaCirculo;
    float radio;
    radio = returnNumber();

    areaCirculo = calcularArea(radio);
    printf("El area es %.2f", areaCirculo);
    return 0;
}


float returnNumber(void)
{
    float numberUser;
    printf("Por favor, ingrese el radio: ");
    scanf("%f", &numberUser);
    return numberUser;
}


float calcularArea(float radio)
{
    float resultado;
    resultado = pi  * pow(radio, 2);
    return resultado;
}
