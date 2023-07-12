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
    return (cod%max);
}

int inserir(tabelaHash tabela, Paciente paciente){
    int p = funcao_hash(paciente.codigo); //pega oq seria a posicao a inserir esse paciente
    Elemento *ant = NULL;
    Elemento *e = tabela[p];//faz o e apontar pra posicao p da tabela7printf("")

    while(e != NULL){ // se ela ja estiver ocupada
        if(e->paciente.codigo == paciente.codigo){ // e se for o mesmo codigo da do paciente em si
            return 0;
        }
        ant = e;//vai guardando o valor de e
        e= e->proximo;//percorre até achar um espaço valido pra inserir
    }
    if(e ==NULL){ //quando achar uma posicao valida
        e = malloc(sizeof(Elemento));
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

Paciente * busca(tabelaHash tabela, int codigo){
    int p = funcao_hash(codigo);
    Elemento *e = tabela[p];
    while(e != NULL){
        if(e->paciente.codigo == codigo){
            return &e->paciente;
        }
        e = e->proximo;
    }
    return NULL;
}

void exibeHash(tabelaHash tabela){
    int i;
    Elemento *teste;
    for(i=0; i<max; i++){
        if(tabela[i] != NULL){
            teste = tabela[i];
            printf("\nPaciente: %d", i);
            while(teste!= NULL){
                printf(" Nome: %s --->", teste->paciente.nome);
                teste = teste->proximo;
            }
            printf("NULL");
        }else{
            printf("\nPaciente: %d NULL", i);
        }
    }
}

int excluir(tabelaHash tabela, int codigo){
    int h =funcao_hash(codigo);
    Elemento *e = tabela[h];
    Elemento *ant = NULL;

    while(e && e->paciente.codigo != codigo){
        ant = e;
        e = e->proximo;
    }
    if(e){
        if(!ant){
            tabela[h] = e->proximo;
        }else{
            ant->proximo = e->proximo;
            free(e);
            return 1;
        }
    }
    return 0;
    
}
