/*20230202_002 Implementar uma função que receba uma lista de nomes inseridos pelo usuário
 (até 20 nomes com até 120 caracteres). O usuário pode inserir desde zero até 20 nomes.  Criar funções para;
a) imprimir a lista de nomes
b) Eliminar um nome da lista.
c) Imprimir os nomes da lista em ordem alfabética.
d) Inserir os nomes da lista em outra lista em ordem alfabética.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 120

void listarNomes(char lista[max][max], int tamanho){
	int j;
	
	for(j=0; j<tamanho; j++){
		printf("Insira o %d nome: ", j+1);
		scanf(" %[^\n]s", lista[j]);	
	}
	
	
}

void imprime(char lista[max][max], int tamanho){
    int i;

    for(i=0; i<tamanho; i++){
        printf("%s ", lista[i]);
    }
    printf("\n");
}

void elimina(char lista[max][max], int tamanho){
    int i, j;

    printf("Digite a posicao do numero que voce deseja eliminar: ");
    scanf("%i", &i);

    i-=1;

    for(j=0; j<tamanho; j++){
        if(j == i){
            lista[i][0] = '\0';
        }
    }
    printf("\nNova lista\n");
    for(j=0; j<tamanho;j++){
        printf("%s ", lista[j]);
    }
    printf("\n");
}

void ordem(char lista[max][max], int tamanho){
	char teste[tamanho];
	int i, j;
    for(i = 0; i < tamanho; i++) {
        for(j = i + 1; j < tamanho; j++){
        	
            if (strcmp(lista[i], lista[j])> 0){
                
                strcpy(teste, lista[i]);
                strcpy(lista[i], lista[j]);
                strcpy(lista[j], teste);
            }
        }
    }
    for(i=0; i<tamanho; i++){
    	printf("%s ", lista[i]);
	}
	printf("\n");
}

void insereOrdem(char lista[max][max], int tamanho){
	char teste[tamanho];
	int i, j;
    for(i = 0; i < tamanho; i++) {
        for(j = i + 1; j < tamanho; j++){
        	
            if (strcmp(lista[i], lista[j])> 0){
                
                strcpy(teste, lista[i]);
                strcpy(lista[i], lista[j]);
                strcpy(lista[j], teste);
            }
        }
    }
}

int main(){
	char a[max][max];
	int j, tamanho;
    char escolha;
	
	
	printf("Insira a quantidade de nomes (de 0 a 20): ");
	scanf("%i", &tamanho);;

	listarNomes(a, tamanho);
    printf("Escolha uma opcao: \n");
    printf("a) imprimir a lista de nomes \nb) Eliminar um nome da lista. \nc) Imprimir os nomes da lista em ordem alfabetica. \nd) Inserir os nomes da lista em outra lista em ordem alfabetica.\ne)Encerrar.\n");
    scanf(" %c", &escolha);

    while(escolha != 'e'|| escolha != 'E'){
    	if(escolha == 'a'||escolha == 'A'){
    		imprime(a, tamanho);
    		printf("\nDigite uma nova opcao: ");
    		scanf(" %c", &escolha);
		}else{
			if(escolha == 'B'||escolha == 'b'){
    			elimina(a, tamanho);
    			printf("\nDigite uma nova opcao: ");
    			scanf(" %c", &escolha);
			}else{
				if(escolha == 'c'||escolha == 'C'){
    				ordem(a, tamanho);
    				printf("\nDigite uma nova opcao: ");
    				scanf(" %c", &escolha);
				}else{
					if(escolha == 'd'|| escolha== 'D'){
						insereOrdem(a, tamanho);
    					printf("Digite uma nova opcao: ");
    					scanf(" %c", &escolha);
					}else{
						break;
					}
				}
			}
		}
	}
	return 0;
}
