//temperatur2
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tempCelsius, tempFaren;

    printf("informe a temperatura em celsius: ");
    scanf("%f", &tempCelsius);

    tempFaren = (tempCelsius*9/5) + 32;

    printf("%.1f C e igual a %.1f F", tempCelsius, tempFaren);
    return 0;
}
