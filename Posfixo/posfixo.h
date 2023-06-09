#ifndef _POSFIXO_H_
#define _POSFIXO_H_


typedef struct aux{
    char expressao;
    struct aux *proximo;
}Elemento;

typedef struct{
    Elemento *topo;
}Pilha;


void inicializaPilha(Pilha *p);
char exclui(Pilha *pilha);
int insere(Pilha *pilha,char termo);
int verificaVazio(Pilha *pilha);
int precedencia(char termo);
char *montaPosfixa(char infixa[]);
int CalculaPosfixa(char *posfixa);
void imprimeExpressao(char expressao[]);

#endif
