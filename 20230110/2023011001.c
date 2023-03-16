#include <stdio.h>
#include <stdlib.h>

int funcao(int n, int d){
    int cont = 0, resto;

    while(n) {
        resto = n%10;
        if(resto == d){
            cont+= 1;
        }
        n /= 10;
    }


    return cont;
}

int main()
{
    int n, d, repete;
    printf("digite os valores para n e d: ");
    scanf("%d %d", &n, &d);
    repete = funcao(n, d);
    printf("O numero %d apareceu %d vezes", d, funcao(n, d));
    return 0;
}


