/temperatura
#include <stdio.h>
#include <stdlib.h>
int main() {

    float tempFaren, tempCelsius;

    printf("informe a temperatura em fahrenheit: ");
    scanf("%f",&tempFaren);

    tempCelsius = (5*(tempFaren - 32))/9;

    printf("%.1f F sera %.1f C", tempFaren, tempCelsius);
	return 0;

}
