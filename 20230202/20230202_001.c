/*
20230202_001 Na turma existem 5 equipes, cada equipe está integrada por 4 alunos 
definidos pelo nome e sobrenome do aluno.  Crie um programa que permita armazenar 
os integrantes das equipes e incorpore a funcionalidade que dado um nome retorne em a equipe do aluno.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char equipe[5][4][50];
	char teste[50];
	int i, j, compara=0, grupo, posicao;
	
	for(i=0; i<5; i++){
		for(j=0; j<4; j++){
			printf("Digite o %d aluno da %d equipe: ", j+1, i+1);
			scanf(" %[^\n]", &equipe[i][j]);	
		}
	}
	printf("Qual nome voce deseja buscar? ");
	scanf(" %[^\n]s", &teste);
	
	
	for(i=0; i<5; i++){
		for(j=0; j<4; j++){
			if(strcmp(equipe[i][j], teste) == 0){
				compara++;
				posicao = i;
			}
		}
	}
	if(compara ==0){
		printf("%s nao esta no grupo", teste);
	}
	else{
		printf("%s esta no %d grupo", teste, posicao+1);
	}
	
	
	
	
}
