#include <stdio.h>
#include <stdlib.h>
#include "hash.h"
#define max 101


void inicializaHash(tabelaHash tabela){
    int i;
    for(i=0; i<max; i++){
        tabela[i] = NULL;
    }
}
int funcao_hash(int cod){
    int i = cod % max;
    return i;
}

int inserir(tabelaHash tabela, Paciente paciente){
    int p = funcao_hash(paciente.codigo); //pega oq seria a posicao a inserir esse paciente
    Elemento *ant = malloc(sizeof(Elemento));
    Elemento *e = malloc(sizeof(Elemento));

    ant = NULL;
    e = tabela[p]; //faz o e apontar pra posicao p da tabela

    while(e != NULL){ // se ela ja estiver ocupada
        if(e->paciente.codigo == paciente.codigo){ // e se for o mesmo codigo da do paciente em si
            return 0;
        }
        ant = e;//vai guardando o valor de e
        e->proximo = e;//percorre até achar um espaço valido pra inserir
    }
    if(e ==NULL){ //quando achar uma posicao valida
        e->paciente = paciente; // coloca paciente no e
        e->proximo = NULL;
        if(ant == NULL){// anterior do elemento e
            tabela[p] = e;
        }else{
            ant->proximo = e;
        }
    }
    return 1;
}

int busca(tabelaHash tabela, int codigo){
    int p = funcao_hash(codigo);
    while(tabela[p] != NULL){
        if(tabela[p]->codigo == codigo){
            return p;
        }
        p = (p+1)% max;
    }
    return -1;
}

void exibeHash(tabelaHash tabela){
    int i;
    Elemento *teste;
    for(i=0; i<max; i++){
        teste = tabela[i];
        if(teste != NULL){
            printf("\nPaciente: %s", teste->paciente.nome);
            printf("\nIdade: %d", teste->paciente.idade);
            printf("\nCodigo: %d", teste->paciente.codigo);
            printf("\nCPF: %d\n", teste->paciente.cpf);
        }
    }
}