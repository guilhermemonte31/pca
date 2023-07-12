#include <stdio.h>
#include <stdlib.h>
#include "hash.h"


int main(){
    tabelaHash tabela;
    inicializaHash(tabela);
    
    Paciente p1;
    p1.codigo =  1291;
    p1.cpf = 1234;
    p1.idade = 20;
    p1.nome = "cristiano";
    inserir(tabela, p1);
    


    
    Paciente p2;
    p2.codigo =  1089;
    p2.cpf = 12224;
    p2.idade = 25;
    p2.nome = "guilherme";
    inserir(tabela, p2);

    
    Paciente p3;
    p3.codigo =  45;
    p3.cpf = 1444;
    p3.idade = 36;
    p3.nome = "messi";
    inserir(tabela, p3);
    exibeHash(tabela);


    Paciente *pr;
    pr = busca(tabela, 45);
    printf("\n\nBusca %s",pr->nome);


    // int codigoExcluir;
    // printf("\n\nDigite o codigo do paciente que deseja excluir: ");
    // scanf("%d", &codigoExcluir);
    // excluir(tabela, codigoExcluir);
    // exibeHash(tabela);
}