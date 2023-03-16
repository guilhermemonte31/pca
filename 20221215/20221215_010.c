#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, peso;

    printf("digite sua altura em metros: ");
    scanf("%f", &altura);

    peso = (72.7 * altura)-58;

    printf("seu peso ideal seria: %.1f kg", peso);
    return 0;
}
