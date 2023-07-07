#ifndef _HASH_H_
#define _HASH_H_
#define max 101

typedef struct{
    char *nome;
    int idade;
    int cpf;
    int codigo;
}Paciente;


typedef Paciente* tabelaHash[max];


void inicializaHash(tabelaHash tabela);
int funcao_hash(int cod);
int inserir(tabelaHash tabela, Paciente paciente);
int busca(tabelaHash tabela, int codigo);
void exibeHash(tabelaHash tabela);


#endif