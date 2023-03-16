#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 100

int imprimeFatorial(int v[], int tamanho);

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
	imprimeFatorial(v,tamanho);
	return 0;
}

int imprimeFatorial(int v[], int tamanho){
	int i, fat=1, cont, num;
	for(i=0; i<=tamanho-1; i++){
		num=v[i];
		for(cont=1; cont<=num; cont++){
			fat*=cont;
		}
		printf("%d ", fat);
		fat=1;
		
	}
}
