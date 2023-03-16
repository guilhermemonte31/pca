#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char modelo[5][21];
	int consumo[5], maisEconomico=0, posicao, i;
	
	for(i=0; i<4; i++){
		printf("Digite o modelo %d: ", i+1);
		scanf("%s", &modelo[i]);
		printf("Quantos Km ele faz com 1L? ");
		scanf("%d", &consumo[i]);
		
		if(consumo[i]>maisEconomico){
			maisEconomico = consumo[i];
			posicao = i;
		}
	}
	printf("O carro mais economico eh o %s\n\n", modelo[posicao]);
	
	for(i=0; i<4; i++){
		printf("O carro %s gastaria %d L para percorrer 1000Km.\n", modelo[i], 1000/consumo[i]);
	}
	
	
}
