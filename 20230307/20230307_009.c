/*20230307_009  Escreva uma função que recebe uma string de caracteres e uma letra e devolve um vetor de inteiros 
contendo as posições (índices no vetor da string) onde a letra foi encontrada) e um inteiro contendo o tamanho do vetor 
criado (total de letras iguais encontradas). 
Utilize o retorno de um vetor para retornar os índices e um ponteiro para guardar o tamanho do vetor. */

#include <stdio.h>
#include <stdlib.h>

void busca(char palavra[100], char letra){
	int i, *v, cont=0, tamanho;
	
	tamanho = sizeof(palavra)-1;
	v = (int *) malloc(tamanho * sizeof(int));
	for(i=0; i<=tamanho; i++){
		if(palavra[i] == letra){
			*(v+cont) = i;
			cont++;
		}
	}
	
	for(i=0; i<cont; i++){
		printf("%d ", *(v+i));
	}
	
}

int main(){
	char palavra[100], letra;
	
	printf("Digite uma palavra: ");
	scanf(" %s", &palavra);
	
	printf("Qual letra voce deseja buscar? ");
	scanf(" %c", &letra);
	
	busca(palavra, letra);
}