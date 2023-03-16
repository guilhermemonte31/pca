/*(b) Faça um programa que lê um inteiro n > 1 e uma sequência de n conjuntos de números inteiros (cada um com no máximo 100 elementos) e constrói e imprime um vetor INTER que representa a intersecção dos n conjuntos.
Por exemplo, se n=3 e os conjuntos são {1, 2, 4, 9}, {2, 4, 7, 8, 9} e {5, 4, 9}, a entrada será:
3    O valor de n
     
4    V[0] = tamanho do primeiro conjunto
1 2 4 9    V[1]  V[2]  V[3]  V[4]
     
5    V[0] = tamanho do segundo conjunto
2 4 7 8 9    V[1]  V[2]  V[3]  V[4]  V[5]
     
3    V[0] = tamanho do terceiro conjunto
5 4 9    V[1]  V[2]  V[3]
E o vetor INTER construído será
INTER[0] = 2         tamanho do conjunto
INTER[1] = 4    INTER[2] = 9    conjunto intersecção
NOTE que não é preciso ler todos os conjuntos de uma só vez. Você pode ler os dois primeiros conjuntos e calcular a primeira intersecção. Depois, leia o próximo conjunto e calcule uma nova intesecção entre esse conjunto lido e o conjunto da intersecção anterior, e assim por diante.
Use obrigatoriamente a função do item a).

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

*/

#include <stdio.h>
#include <string.h>
#define max 100

int main(){
    int n, i, j, k, t=1, m[max][max], tamanhoVetor, interseccao[max], teste=0, cont=1;

    printf("Digite a quantidade de conjuntos: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("Digite o tamanho do vetor %d: ", i);
        scanf("%d", &tamanhoVetor);
        if(tamanhoVetor>teste){
            teste=tamanhoVetor;
        }
        m[i][0]=tamanhoVetor;
        for(j=1; j<tamanhoVetor; j++){
            printf("v%d[%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    printf("\n");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<n; i++){
        for(j=1; j<=teste; j++){
            for(k=1; k<=teste; k++){
                if(m[i][j]==m[i+1][k]){
                    printf("TESTE= %d\n", m[i][j]);
                    interseccao[t] = m[i][j];
                    t++;
                    cont++;
                }
            }
        }
    }
    interseccao[0] = cont;
    printf("\nCONT = %d\n", cont);
    printf("\nINTERSECCAO\n");
    for(i=0; i<cont; i++){
        printf("%d ", interseccao[i]);
    }
}