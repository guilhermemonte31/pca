/*20230307_005 Fa�a um programa que leia tr�s valores inteiros e chame uma fun��o que receba estes 3 valores de entrada e retorne eles ordenados, 
ou seja, o menor valor na primeira vari�vel, o segundo menor valor na vari�vel do meio, e o maior valor na �ltima vari�vel. 
A fun��o deve retornar o valor 1 se os tr�s valores forem iguais e 0 se existirem valores diferentes. Exibir os valores ordenados na tela.*/

#include <stdio.h>


void ordena(int x[3]){
	int maior=1000, teste, i, j;
	
	for(i=0; i<3; i++){
		for(j=i; j<3; j++){
			if(x[i]>x[j]){
				teste = x[i];
				x[i] = x[j];
				x[j] = teste;
			}
		}
	}
	
	for(i=0; i<3; i++){
		printf("%d  ", *(x+i));
	}
}



int main(){
	int x[3], i;
	
	for(i=0; i<3; i++){
		printf("Digite o %d valor: ", i+1);
		scanf("%d", (x+i));
	}
	
	ordena(x);
}
