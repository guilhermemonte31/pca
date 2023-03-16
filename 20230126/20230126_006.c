#include <stdio.h>
#include <stdlib.h>

int main(){
	
	
	int matriz[5][5] = {{11,4,17,10,23},{24,12,5,18,6},{7,25,13,1,19},{20,8,21,14,2},{3,16,9,22,15}};
	int soma, valor, i, j, verifica=1;
	
	soma=0;
	for(i=0; i<5; i++){
		soma+=matriz[i][i];
	}
	printf("DIAGONAL PRINCIPAL: %d\n", soma);
	
	valor = soma;
	
	soma=0;
	for(i=0; i<5; i++){
		soma+= matriz[i][4-1];
	}
	printf("DIAGONAL SECUNDARIA: %d\n", soma);
	if(soma!=valor) verifica=0;
	

	
	for(i=0; i<5; i++){
		soma=0;
		for(j=0; j<5; j++){
			soma+=matriz[i][j];
		
		}
		printf("Linha %d= %d\n", i+1, soma);	
	}
	if(soma!=valor) verifica=0;
	
	for(j=0; j<5; j++){
		soma=0;
		for(i=0; i<5; i++){
			soma+=matriz[i][j];
		}
		printf("Coluna %d= %d\n", j+1, soma);
	}
	
	if(soma!=valor) verifica=0;
	
	
	if(verifica ==0) printf("Nao eh quadrado perfeito");
	else printf("Eh quadrado perfeito");
	return 0;
}
