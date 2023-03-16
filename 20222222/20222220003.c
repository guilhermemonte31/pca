#include <stdio.h>
#include <stdlib.h>

int main()
{

    int cont, somaImpar=0, num;

    for(cont=100; cont<=200; cont++){
        printf("escreva um numero inteiro: ");
        scanf("%d", &num);
        if (num%2!=0){
            somaImpar+= num;
        }
    }
    printf("a soma de todos os impares vai ser: %d", somaImpar);

    return 0;
}
