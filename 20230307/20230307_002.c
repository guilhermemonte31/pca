/* 20230307_002 Escreva uma fun��o que encontra um valor em um vetor de inteiros e retorna um ponteiro para o primeiro endere�o onde este valor foi encontrado ou NULL caso o valor n�o esteja no vetor;
- A fun��o recebe como par�metro dois ponteiros para inteiros (os endere�os inicial e final) e deve utilizar nota��o de ponteiros n�o de vetores;
- Deve ser criada uma fun��o main() para testar a fun��o implementada. Na fun��o main deve ser declarado um vetor de tamanho 10, com tr�s ocorr�ncias do valor 2;
- A main() deve utilizar a fun��o criada para encontrar  e imprimir os endere�os de mem�ria de todas as ocorr�ncias do valor 2, em um la�o, at� que todo o vetor tenha sido pesquisado.
- Defina a constante NULL se necess�rio.*/
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
