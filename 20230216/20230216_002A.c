/*20230216_001  . Um conjunto pode ser representado por um vetor da seguinte forma: V[0] é o tamanho do conjunto; V[1], V[2], etc.
 são os elementos do conjunto (sem repetições).
(a) Faça uma função chamada intersecção que dados dois conjuntos de números inteiros A e B, 
constrói um terceiro conjunto C que é a intersecção de A e B. Lembre-se de que em C[0] a sua função deve colocar o tamanho da intersecção.
Exemplo, os conjuntos A={1, 2, 4, 9} e B={2, 4, 7, 8, 9}
A[0] = 4, A[1]=1, A[2]=2,....
igual para B
A intersecção são os números que estão em A e em B, no exemplo {2, 4, 9}*/

#include <stdio.h>
#define max 100

void interseccao(int tamanhoA, int tamanhoB, int va[tamanhoA], int vb[tamanhoB]){
    int i, j, vc[max], cont=0, t=1;

    for(j=0; j<tamanhoA; j++){
        for(i=0; i<tamanhoB; i++){
            if(va[j] == vb[i]){
                
                vc[t]= va[j];
                cont++;
                t++;
            }
        }
    }

    vc[0]= cont+1;

    printf("Vetor interseccao: \n");
    for(i=0; i<cont+1; i++){
        printf("%d ", vc[i]); 
    }

    printf("Lembrando que o primeiro valor eh o tamanho total do vetor");

}

int main(){
    int va[max], vb[max];
    int i, tamanhoA, tamanhoB;

    //vetor a
    printf("Digite o tamanho do vetor A: ");
    scanf("%i", &tamanhoA);

    va[0]= tamanhoA;

    for(i=1; i<tamanhoA; i++){
        printf("Digite o valor de va[%i]= ", i);
        scanf("%i", &va[i]);
    }

    //vetor b
    printf("\nDigite o tamanho do vetor B: ");
    scanf("%i", &tamanhoB);

    va[0]= tamanhoB;

    for(i=1; i<tamanhoB; i++){
        printf("Digite o valor de vb[%i]= ", i);
        scanf("%i", &vb[i]);
    }

    interseccao(tamanhoA, tamanhoB, va, vb);
} 