/*20230307_007 Escreva uma função que receba um vetor inteiro v[0..n-1] e os endereços de duas variáveis inteiras, 
digamos min e max, e deposite nessas variáveis o valor do elemento mínimo e o valor do elemento máximo do vetor. 
Escreva também uma função main que use a função.*/

#include <stdio.h>
#define tot 100


void aux(int v[tot],int *min, int *max, int tam){
    int i, j, teste, lim;

    for(i=0; i<tam; i++){
        for(j=0; j<i; j++){
            if(v[i]<v[j]){
                teste = v[i];
                v[i] = v[j];
                v[j] = teste;
            }
        }
    }

    for(i=0; i<tam; i++){
        printf("%d ", *(v+i));
    }
    *min = v[0];
    *max = v[tam-1];
}


int main(){
    int v[tot];
    int min, max, i, tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    for(i=0; i<tamanho; i++){
        printf("v[%d]= ", i+1);
        scanf("%d", (v+i));
    }

    aux(v, &min, &max, tamanho);

    printf("\n MAX= %d  MIN= %d", max, min);
}