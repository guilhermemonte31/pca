#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int trasPraFrente(){

	char palavra[MAX];
	int i, tamanho, cont=0;
	
	printf("\n*****FUNCAO TRAS PARA FRENTE*****\n");
	
	printf("Digite uma palavra: ");
	scanf("%s", &palavra);
	
	tamanho = sizeof(palavra);
	
	for(i=0; i<=MAX; i++){
		if(palavra[i] ==000){
			break;
		}
		cont++;
	}	
	
	for(i=cont-1; i>=0; i--){
		printf("%c", palavra[i]);
	}
	printf("\n");
}

int semVogal(){
	
	char palavra[MAX];
	int i, tamanho, cont = 0;
	
	printf("\n*****FUNCAO SEM VOGAL*****\n");
	
	printf("Digite uma palavra: ");
	scanf("%s", &palavra);
	
	for(i=0; i<=MAX; i++){
		if(palavra[i] ==000){
			break;
		}
		cont++;
	}
	
	for(i=0; i<cont; i++){
		if(palavra[i] != 'a' &&palavra[i] != 'e' && palavra[i] != 'i' && palavra[i] != 'o' && palavra[i] != 'u' ){
			printf("%c", palavra[i]);
		}
	}
	
	printf("\n");
	
}

int maiuscula(){
	
	char palavra[MAX];
	int i, tamanho, cont = 0;
	
	
	printf("\n*****FUNCAO MAIUSCULA*****\n");
	
	printf("Digite uma palavra: ");
	scanf("%s", &palavra);
	
	for(i=0; i<=MAX; i++){
		if(palavra[i] ==000){
			break;
		}
		cont++;
	}
	
	for(i=0; i<cont; i++){
		if(palavra[i]>= 'a' && palavra[i]<='z'){
			palavra[i] -= 32;
		}
			printf("%c", palavra[i]);
	}
	printf("\n");
}


int contaRepeticoes(){
	char palavra[MAX];
	int i, tamanho, cont = 0, cont2=0;
	char letra;
	
	printf("\n*****REPETICOES DE UMA LETRA*****\n\n");
	
	printf("Digite uma palavra: ");
	scanf("%s", &palavra);
	
	printf("Qual letra voce deseja buscar na palavra? ");
	scanf(" %c", &letra);
	
	
	for(i=0; i<=MAX; i++){
		if(palavra[i] ==000){
			break;
		}
		cont++;
	}
	for(i=0; i<cont; i++){
		if(palavra[i]== letra){
			cont2++;
		}
	}
	printf("A letra '%c' aparece %d x na palavra.", letra, cont2);
	printf("\n");
}


int excluiLetras(){
	char palavra[MAX];
	int i, tamanho, cont = 0;
	char letra;
	
	printf("\n*****EXCLUINDO LETRAS*****\n");
	
	printf("Digite uma palavra: ");
	scanf("%s", &palavra);
	
	printf("Qual letra voce deseja apagar? ");
	scanf(" %c", &letra);
	
	for(i=0; i<=MAX; i++){
		if(palavra[i] ==000){
			break;
		}
		cont++;
	}
	for(i=0; i<cont; i++){
		if(palavra[i] != letra){
			printf("%c", palavra[i]);
		}
	}
	printf("\n");
}


int main(){
	trasPraFrente();
	semVogal();
	maiuscula();
	contaRepeticoes();
	excluiLetras();
	
	return 0;
	
}








