/*
20230131_006. Faça um programa que, dada uma string, diga se ela e um palíndromo ou não. 
Lembrando que um palíndromo e uma palavra que tenha a propriedade de poder ser lida 
tanto da direita para a esquerda como da esquerda para a direita. Exemplo: ovo, arara,
 Anotaram a data da maratona.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
int main(){
	char frase[MAX];
	char copia[MAX];
	char teste[MAX];
	int i,j=0,  tamanho, verifica;
	printf("Digite uma frase ou palavra: ");
	scanf("%[^\n]", &frase);
	
	for(i=0; i<strlen(frase); i++){
		if(frase[i]!= ' '){
			copia[j] = frase[i];
			j++;
		}
		
	}
	
	strcpy(teste, copia);
	strrev(teste);
	
	
	verifica = strcmp(teste, copia);
	
	if(verifica ==0){
		printf("Eh palindromo");
	}else printf("Nao eh palindromo");
	
 	
 }
