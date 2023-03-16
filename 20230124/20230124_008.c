#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 100

int prodEscalar(int x[], int y[], int tamanho);


int main(){
	
	int tamanho, cont1, cont2;
	int x[TAMANHO];
	int y[TAMANHO];
	
	
	printf("qual o tamanho dos vetores? ");
	scanf("%d", &tamanho);
	
	for(cont1=0; cont1<tamanho; cont1++){
		printf("Digite o %d valor do vetor x: ", cont1+1);
		scanf("%d", &x[cont1]);
	}
	
	for(cont2=0; cont2<tamanho; cont2++){
		printf("Digite o %d valor do vetor y:", cont2+1);
		scanf("%d", &y[cont2]);
	}
	
	prodEscalar(x, y, tamanho);
	
}


int prodEscalar(int x[], int y[], int tamanho){
	int i, prod=0;
	for(i=0; i<tamanho; i++){
		prod += x[i]*y[i];
	}
	printf("O produto escalar de X e Y eh: %d", prod);
}
