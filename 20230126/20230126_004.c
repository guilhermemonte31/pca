#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main(){
	int m[3][3];
	int x, i, j, encontra =0 ;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Digite o valor [%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);
		}
	}
	printf("Qual valor voce deseja buscar? ");
	scanf("%d", &x);
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(m[i][j] == x){
				printf("Valor aparece na posicao [%d][%d]", i, j);
				encontra = 1;
			}
		}
	}
	if(encontra ==0){
		printf("Nao encontrado");
	}
}
