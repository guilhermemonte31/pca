/*20230307_004 Crie um programa que contenha um array de inteiros contendo 8 elementos. 
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.
a)Imprimir o endereço das posições contendo valores pares*/
#include <stdio.h>


int main(){
	int x[8], i;
	
	for(i=0; i<8;i++){
		printf("Digite o valor de x[%d]: ", i+1);
		scanf("%d", x+i);
	}
	
	for(i=0; i<8;i++){
		printf("%d ", (*(x+i)*2));
	}
	printf("\n");
	
	
	for(i=0; i<8; i++){
		if((*(x+i))%2 == 0){
			printf("elemento %d do array eh %d e seu endereco eh %d\n", i+1, *(x+i), x+i );
			
		}
	}
	
}
