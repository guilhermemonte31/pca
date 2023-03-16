//soma de numeros

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, soma;

    printf("digite um numero: ");
    scanf("%d", &num1);

    printf("digite outro numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    printf("a soma de %d com %d e: %d", num1, num2, soma);
    return 0;
}
