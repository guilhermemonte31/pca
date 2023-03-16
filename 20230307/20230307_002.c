/* 20230307_002 Escreva uma função que encontra um valor em um vetor de inteiros e retorna um ponteiro para o primeiro endereço onde este valor foi encontrado ou NULL caso o valor não esteja no vetor;
- A função recebe como parâmetro dois ponteiros para inteiros (os endereços inicial e final) e deve utilizar notação de ponteiros não de vetores;
- Deve ser criada uma função main() para testar a função implementada. Na função main deve ser declarado um vetor de tamanho 10, com três ocorrências do valor 2;
- A main() deve utilizar a função criada para encontrar  e imprimir os endereços de memória de todas as ocorrências do valor 2, em um laço, até que todo o vetor tenha sido pesquisado.
- Defina a constante NULL se necessário.*/
#include <stdio.h>
#define NULL 0

int encontra(int *inicio, int *fim){
	int soma=0;
	for(inicio; inicio<=fim; inicio++){
		if(*inicio == 2){
			printf("%d   ", inicio);
			soma++;
		}
	}
	if(soma==0){
		return NULL;
	}
}


int main(){
	int vetor[] = {1,2,3,4,5,2,7,8,9,2};
	int e;
	
	printf("Teste\n");
	printf("%d    %d     %d    \n", &vetor[1], &vetor[5], &vetor[9]);
	
	e = encontra(&vetor[0], &vetor[9]);
}
