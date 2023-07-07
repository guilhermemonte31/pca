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
    int p = funcao_hash(paciente.codigo);
    if(tabela[p] == NULL){
        tabela[p] = malloc(sizeof(Paciente));
        *(tabela[p]) = paciente;
    }else{
        while(tabela[p] != NULL){
            p++;
        }
        tabela[p] = malloc(sizeof(Paciente));
        *(tabela[p]) = paciente;
    }
    return 1;
}

int busca(tabelaHash tabela, int codigo){
    int p = funcao_hash(codigo);
    int i=0;
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
    for(i=0; i<max; i++){
        if(tabela[i] != NULL){
            printf("\nPaciente: %s", tabela[i]->nome);
            printf("\nIdade: %d", tabela[i]->idade);
            printf("\nCodigo: %d", tabela[i]->codigo);
            printf("\nCPF: %d\n", tabela[i]->cpf);
        }
    }
}