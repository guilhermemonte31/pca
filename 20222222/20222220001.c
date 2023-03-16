#include <stdio.h>
#include <stdlib.h>

int main()
{

    int cont, soma = 0, num;

    for(cont = 1; cont<= 5; cont ++){
        printf("digite um numero: ");
        scanf("%d", &num);
        soma += num;
    }

    printf("soma: %d", soma);


    return 0;
}
