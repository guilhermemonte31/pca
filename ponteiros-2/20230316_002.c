/*20230316_002 Construa um programa que aloque em tempo de execução (dinamicamente) 
uma matriz de ordem m x n (linha por coluna) usando só aritmética de ponteiros. 
Usar o programa para definir a seguinte matriz
1 2 3
4 5 6
a) Imprima os valores da matriz usando aritmética de ponteiros.
b) Imprima os valores da matriz usando indexes.
c) Liberar a área de memória alocada pela matriz.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int linha, coluna, i, j;
    int **m;

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &linha);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &coluna);

    m = (int **) malloc(linha*sizeof(int));

    for(i=0; i<linha; i++){
        *(m+i) = (int *) malloc (coluna * sizeof(int));
    }

    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++){
            printf("m[%d][%d]= ", i, j);
            scanf("%d", (*(m+i)+j));
        }
    }

    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++){
            printf("%d", *(*(m+i)+j));
        }
        printf("\n");
    }

    free(m);
    return 0;
}
