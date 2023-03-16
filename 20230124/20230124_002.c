#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 100

int imprimeInversa(int v[], int tamanho);

int main(){
	
	int v[TAMANHO];
	int tamanho;
	int i;
	printf("Quantidade de numeros: ");
	scanf("%d", &tamanho);
	for(i=0; i<tamanho; i++){
		printf("Digite o %d numero: ", i+1);
		scanf("%d", &v[i]);
	}
	imprimeInversa(v,tamanho);
	return 0;
}

int imprimeInversa(int v[], int tamanho){
	int i;
	for(i=tamanho-1; i>=0; i--){
		printf("%d ", v[i]);
	}
}
