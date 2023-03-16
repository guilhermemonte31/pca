#include <stdio.h>
#include <stdlib.h>


void multEscalar(int m[3][3], int k){
	int i, j;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			m[i][j]*=k;
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int matriz[3][3];
	int i, j, k;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("\nDigite o valor [%d] [%d] da matriz 1: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\nDeseja multiplicar a matriz por qual escalar? ");
	scanf("%d", &k);
	
	printf("\nA multiplicacao da matriz pelo numero %d resulta na matriz: \n",k);
	multEscalar(matriz, k);
}
