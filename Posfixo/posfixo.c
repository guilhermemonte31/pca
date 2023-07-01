#include <stdio.h>
#include <stdlib.h>
#include "posfixo.h"
#include <string.h>
#define max 100

void inicializaPilha(Pilha *p){
    p->topo = NULL;
}


//transforma infixa para posfixa
char *montaPosfixa(char infixa[]){ 
    int i, j=0, tamanho;
    tamanho = strlen(infixa); //pega o tamanho da infixa
    char *posfixa = malloc(tamanho * sizeof(char)); //declara a posfixa e alloca espaco pra ela do mmesmo tamanho da infixa
    char termo, proximo;
    Pilha *pilha = malloc(sizeof(Pilha)); //cria pilha auxiliar
    inicializaPilha(pilha);
    for(i=0; i<tamanho; i++){
        termo = infixa[i]; //inicia no primeiro termo da infixa
        if(termo != ' '){ //desconsidera os espaços
            switch(termo){

            case '(':
                insere(pilha, termo);//só empilha o valor
                break;

            case ')':
                while((proximo = exclui(pilha)) != '('){//desempilha e coloca na posfixa até achar o (
                    posfixa[j] = proximo;
                    j++;
                }
                break;
            
            case '+':
            case '-':
            case '*':
            case '/':
                while( !verificaVazio(pilha) && precedencia(pilha->topo->expressao) >= precedencia(termo)){ //vê se a pilha nao esta vazia e compara a precedencia das operacoes
                    posfixa[j] = exclui(pilha); //desempilha e coloca na posfixa
                    j++;
                }
                insere(pilha, termo);
                break;
            
            default:
                posfixa[j] = termo;//se nao for nenhuma operação, só pode ser um numero, entao insere na posfixa
                j++;
            }

        }
    }
    while(!verificaVazio(pilha)){ //quando termina o for, vê se nao sobrou nada na pilha, se tiver sobrado, insere na posfixa
        posfixa[j]= exclui(pilha);
        j++;
    }
    posfixa[j] = '\0'; //fim de string
    return posfixa;

}




char exclui(Pilha *pilha){ //exclui um elemento da pilha e retorna o valor excluido
    if(pilha->topo==NULL) return 0;
    Elemento *i = malloc(sizeof(Elemento));
    i = pilha->topo;
    pilha->topo = pilha->topo->proximo;
    return i->expressao;
}


int insere(Pilha *pilha,char termo){ //insere um elemento na pilha
    Elemento *i = malloc(sizeof(Elemento));
    i->expressao = termo;
    i->proximo = NULL;
    if(i!= NULL){
        i->proximo = pilha->topo;
        pilha->topo = i;
    }else return 0;
    return 1;
}

int verificaVazio(Pilha *pilha){
    if(pilha->topo == NULL){
        return 1;
    }else return 0;
}

void imprimeExpressao(char expressao[]){
    int t = strlen(expressao);
    int i;
    printf("EXPRESSAO INFIXA: \n");
    for(i=0; i<t; i++){
        printf("%c", expressao[i]);
    }
    printf("\n");
}

int precedencia(char termo){ //compara as precedencias para inserir na posfixa
    switch (termo)
    {
    case '*':
    case'/': // * e / tem o mesmo peso
        return 2;

    case '+': //+ e - tem o mesmo peso
    case '-':
        return 1;
    break;

    default:
    return 0;
        break;
    }
}


int CalculaPosfixa(char *posfixa){ //calcula o resultado de uma posfixa
    int i=0;
    int a, b;
    Pilha *pilha = malloc(sizeof(Pilha)); //cria pilha auxiliar
    inicializaPilha(pilha);
    while(posfixa[i] != '\0'){ //varre a string até seu fim \0
        if(posfixa[i]>= '0' && posfixa[i] <= '9')
            insere(pilha, posfixa[i] - '0'); //verifica se o termo em questao é um numero de acordo com a tabela ascii. se for, adiciona direto na pilha como um int
        else{
            a = exclui(pilha); //pega o elemento do topo da pilha
            b = exclui(pilha); //pega o elemento do topo da pilha
            switch(posfixa[i]){
                case '+': //insere a soma na pilha
                    insere(pilha, b+a);
                    break;
                case '-'://insere a subtração na pilha
                    insere(pilha, b-a);
                    break;
                case '/': //insere a divisao na pilha
                    insere(pilha, b/a);
                    break;
                case '*': //insere a multiplicação na pilha
                    insere(pilha, b*a);
                    break;
            }
        }
        i++;
    }
    return exclui(pilha); //retorna o valor que ficou na pilha. que no caso, é o resultado final
}
