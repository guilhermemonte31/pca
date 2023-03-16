#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int opcaoA(){
	char s1[21];
	printf("Digite uma string S1: ");
	scanf("%s", &s1);
	return 0;
}

void opcaoB(){
	char s1[21];
	int tamanho;
	printf("Digite uma string S1: ");
	scanf("%s", &s1);
	tamanho = strlen(s1);
	printf("tamanho = %d\n", tamanho);
}

void opcaoC(){
	char s1[21], s2[21];
	int compara=0,i;
	printf("Digite uma string S1: ");
	scanf(" %s", &s1);
	printf("Digite uma string S2: ");
	scanf(" %s", &s2);
	
	for(i=0; i<21; i++){
		if(s1[i]!=s2[i]){
			compara = 1;
		}
	}
	if(compara ==1){
		printf("nao sao iguais\n");
	}else{
		printf("sao iguais\n");
	
	} 
}

void opcaoD(){
	char s1[21], s2[21];
	printf("Digite uma string S1: ");
	scanf(" %s", &s1);
	printf("Digite uma string S2: ");
	scanf(" %s", &s2);
	
	printf(" %s%s\n", s1,s2);
}

void opcaoE(){
	
	char s1[21];
	int i, tamanho;
	printf("Digite uma string S1: ");
	scanf(" %s", &s1);
	tamanho = strlen(s1);
	for(i=tamanho; i>0; i--){
		printf(" %c", s1[i]);
	}
	printf("\n");
}

void opcaoF(){
	
	char s1[21];
	char letra;
	int i, cont;
	printf("Digite uma string S1: ");
	scanf(" %s", &s1);
	printf("Qual letra voce deseja buscar?");
	scanf("  %c", &letra);
	for(i=0;i<strlen(s1); i++){
		if(s1[i] == letra){
			cont++;
		}
	}
	printf("a letra %c apareceu %d vezes\n", letra, cont);
}

void opcaoG(){
	
	char s1[21], c1, c2;
	int i;
	printf("Digite uma string S1: ");
	scanf(" %s", &s1);
	printf("Qual letra voce deseja substituir?");
	scanf(" %c", &c1);
	printf("Qual letra voce deseja por no lugar");
	scanf(" %c", &c2);
	
	for(i=0; i<strlen(s1); i++){
		if(s1[i]==c1){
			s1[i] == c2;
		}
	}
	printf(" %s\n", s1);
}

void opcaoH(){
	char s1[21], s2[21];
	printf("Digite uma string S1: ");
	scanf(" %s", &s1);
	printf("Digite uma string S2: ");
	scanf(" %s", &s2);
	
	if(strstr(s1, s2)!= NULL){
		printf("Eh substring\n");
	}else{
		printf("Nao eh substring\n");
	}
	
}

void opcaoI(){
	
	char s1[21];
	int inicio, tamanho, i;
	printf("Digite uma string S1: ");
	scanf(" %s", &s1);
	printf("deseja imprimir a partir de qual posicao? ");
	scanf("%d", &inicio);
	printf("Qual o tamanho?");
	scanf("%d", &tamanho);
	
	for(i=inicio; i<(tamanho+inicio); i++){
		printf("%c", s1[i]);
	}
	printf("\n");
}

int main(){
	
	char escolha;
	printf("Selecione uma opcao do menu: \n");
	
	printf("(a) Ler uma string S1 (tamanho maximo 20 caracteres); \n(b) Imprimir o tamanho da string S1;\n(c) Comparar a string S1 com uma nova string S2 fornecida pelo usuario e imprimir o resultado da comparacao;\n(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenacao;\n(e) Imprimir a string S1 de forma reversa;\n(f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser informado pelo usuario;\n(g) Substituir a primeira ocorrencia do caractere C1 da string S1 pelo caractere C2. Os caracteres C1 e C2 serao lidos pelo usuario;\n(h) Verificar se uma string S2 eh substring de S1. A string S2 deve ser informada pelo usuario;\n(i) Retornar uma substring da string S1. Para isso o usuario deve informar a partir de qual posicao deve ser criada a substring e qual eh o tamanho da substring; \n(s) Sair\n\n");
	
	scanf(" %c", &escolha);
	
	while(escolha != 'S'|| escolha!= 's'){
		
		if(escolha == 'A'||escolha == 'a') {
			opcaoA();
			printf("Nova opcao: ");
			scanf(" %c", &escolha);
		}
		
		else if(escolha == 'B'||escolha == 'b'){
			opcaoB();
			printf("Nova opcao: ");
			scanf(" %c", &escolha);
		}
		
		
		else if(escolha == 'C'||escolha == 'c'){
			opcaoC();
			printf("Nova opcao: ");
			scanf(" %c", &escolha);
		}
		
		else if(escolha == 'D'||escolha == 'd'){
			opcaoD();
			printf("Nova opcao: ");
			scanf(" %c", &escolha);
		}
		
		else if(escolha == 'E'||escolha == 'e'){
			opcaoE();
			printf("Nova opcao: ");
			scanf(" %c", &escolha);
		}
		
		else if(escolha == 'F'||escolha == 'f'){
			opcaoF();
			printf("Nova opcao: ");
			scanf(" %c", &escolha);
		}
	
		else if(escolha == 'G'||escolha == 'g'){
			opcaoG();
			printf("Nova opcao: ");
			scanf(" %c", &escolha);
		}
		
		else if(escolha == 'H'||escolha == 'h'){
			opcaoH();
			printf("Nova opcao: ");
			scanf(" %c", &escolha);
		}
		
		else if(escolha == 'I'||escolha == 'i'){
			opcaoI();
			printf("Nova opcao: ");
			scanf(" %c", &escolha);
		}
		
		else if (escolha == 'S'||escolha == 's') break;
		
		
	}
	return 0;	
}
