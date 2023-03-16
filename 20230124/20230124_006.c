#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 100
int main()
{

    int i, j, teste=0, tamanho=7, k, menorValor, menorPosicao;

    int v[TAMANHO];
    printf("Qual o tamanho do vetor?");
    scanf("%d", &tamanho);

    for(k=0; k<tamanho; k++){
        printf("Digite o %d valor: ", k+1);
        scanf("%d", &v[k]);
    }

    for(i=0; i<tamanho; i++){
        menorValor = v[i];
        menorPosicao = i;
        for(j=i; j<tamanho; j++){
            if(v[j]<menorValor) {
                menorValor = v[j];
                menorPosicao = j;
            }
        }
        teste = v[i];
        v[i] = menorValor;
        v[menorPosicao] = teste;
        printf("%d", v[i]);
    }


    return 0;
}
