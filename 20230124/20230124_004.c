#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 100

int imprimePar(int v[], int tamanho);

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
	imprimePar(v,tamanho);
	return 0;
}

int imprimePar(int v[], int tamanho){
	int i;
	for(i=0; i<=tamanho-1; i++){
		if(v[i]%2==0){
			printf("%d ", v[i]);
		}
		
	}
}
