#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define TRUE 1
#define FALSE 0

int multiplicaMatriZ(int m1[MAX][MAX], int l1, int c1, int m2[MAX][MAX],int l2,int c2, int m3[MAX][MAX])
{
	int i, j, i1, i2, j1, j2, valida, somap=0;
	
	if(c1!=l2){
		valida =FALSE;	
	} 
	
	else{
		valida =TRUE;
		for(i=0; i<l1; i++){
			for(j=0; j<c2; j++){
				for(i2=0, j1=0; (i2<l2) && (j1<c1); i2++, j1++){
					somap+= m1[i][j1]*m2[i1][j];
				}
				printf("\nSoma dos produtos = %i", somap);
				m3[i][j] = somap;
				somap=0;
			}
		}
	}
	return valida;
}

int main(){
	int matriz1[MAX][MAX];
	int matriz2[MAX][MAX];
	int matriz3[MAX][MAX];
	int l1,c1,l2,c2,i,j, mult;
	
	printf("Digite a quantidade de linhas e colunas da matriz 1: ");
	scanf("%d %d", &l1, &c1);
	
	for(i=0; i<l1; i++){
		for(j=0; j<c1; j++){
			printf("\nDigite o valor [%d] [%d] da matriz 1: ", i, j);
			scanf("%d", &matriz1[i][j]);
		}
	}
	
	
	
	printf("Digite a quantidade de linhas e colunas da matriz 2: ");
	scanf("%d %d", &l2, &c2);
	
	for(i=0; i<l2; i++){
		for(j=0; j<c2; j++){
			printf("Digite o valor [%d] [%d] da matriz 2: ", i, j);
			scanf("%d", &matriz2[i][j]);
		}
	}
	
	mult = multiplicaMatriz(matriz1, l1, c1, matriz2, l2, c2, matriz3);
	
	if(mult == FALSE) printf("\nNao foi possivel realizar a multiplicacao");
	else{
		printf("\nMatriz resultante: ");
		
		for(i=0; i<l1; i++){
			for(j=0; j<c2; j++){
				printf("%d", matriz3[i][j]);
			}
		}
	}
	
	return 0;
	
}
















