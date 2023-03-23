/*20230316_003 Desenvolva um programa que calcule a soma de duas matrizes MxN de números reais (double). 
A implementação deste programa deve considerar as dimensões fornecida pelo usuário 
(Dica: represente a matriz através de variáveis do tipo double **, 
usando alocação dinâmica de memória)*/

#include <stdio.h>
#include <stdlib.h>

double **formaMatriz (int linha, int coluna){
    int i, j;
    double **m;

    m = (double **) malloc(linha * sizeof(double *));

    for(i=0; i<linha; i++){
        *(m+i) = (double *) malloc(coluna * sizeof(double));
    }

    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++){
            printf("[%d][%d]= ", i, j);
            scanf("%lf", (*(m+i)+j));
        }
    }

    return m;
}

int main(){
    int linha, coluna, i, j;
    double **m1;
    double **m2;
    double **matrizSoma;

    printf("Digite, respectivamente, a quantidade de linhas e colunas das matrizes: ");
    scanf("%d %d", &linha, &coluna);

    printf("MATRIZ 1:\n");
    m1 = formaMatriz(linha, coluna);

    
    printf("MATRIZ 2:\n");
    m2 = formaMatriz(linha, coluna);

    matrizSoma = (double**) malloc(linha * sizeof(double*));
    printf("\n\nMATRIZ SOMA: \n");
    for(i=0; i<linha; i++){
        *(matrizSoma+i) = (double*) malloc (coluna * sizeof(double));
    }

    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++){
            *(*(matrizSoma+i)+j) = (*(*(m1+i)+j)) + (*(*(m2+i)+j));
        }
    }

    for(i=0; i<linha; i++){
        for(j=0; j<coluna; j++){
            printf("%.1lf ", *(*(matrizSoma+i)+j));
        }
        printf("\n");
    }


}
