/*1. O professor têm duas equipes na disciplina, cada equipe está formada por seis alunos identificados pelo nome e o sexo. Cada aluno obteve uma nota final na 
    disciplina (valor real entre 0 e 10).
a) Crie estruturas de dados baseadas em arrays para trabalhar com as informações da turma:
Uma matriz para os nomes dos alunos das duas equipes. As equipes devem estar em dimensões diferentes.
Uma matriz para o sexo dos alunos das duas equipes. Utilizar um caractere (não uma string) para representar o sexo.
Uma matriz para as notas dos alunos das duas equipes

b) Atribua valores para cada estrutura criada na letra A) (só pode usar uma linha de código para inicializar cada estrutura).
c) Determine e imprima qual equipe tem a maior quantidade de mulheres.
d) Como parte de um processo de seleção para participar de um projeto, se precisa ter nota final maior ou igual de 8.0, e ser do sexo feminino. 
    Crie e preencha uma nova estrutura com os nomes das alunas das duas equipes que atendem a essas condições.
e)  Imprimir os nomes das alunas que podem participar do projeto.
f) (Faça uma função que acrescente um ponto para as alunas de uma equipe e use essa função para acrescentar um ponto às alunas da segunda equipe.
g) Faça uma função que permita adicionar um novo aluno em uma das equipes, solicitando as informações do mesmo ao usuário.*/

#include <stdio.h>
#include <string.h>

void acrescenta(char sexo[], float notas[]){
    int i;
    for(i=0; i<6; i++){
        if(sexo[i]=='f') notas[i]++;
    }
}

void adiciona(char alunos[2][6][100], char sexo[2][6], float notas[2][6]){
    char novoAluno[100];
    char novoSexo;
    float nota;
    int escolha, i;
    printf("\nDigite, respectivamente, o nome, o sexo e a nota do novo aluno: ");
    scanf("%s %c %f", &novoAluno, &novoSexo, &nota);

    printf("Deseja adiciona-lo em qual equipe? 1- equipe1   2- equipe2  ");
    scanf("%d", &escolha);

    if(escolha==1){
        strcpy(alunos[0][6], novoAluno);
        notas[0][6] = nota;
        sexo[0][6] = novoSexo;
        for(i=0; i<7; i++){
            printf("%s %c %.1f\n", alunos[0][i], sexo[0][i], notas[0][i]);
        }
    }else{
        if(escolha==2){
        strcpy(alunos[1][6], novoAluno);
        notas[1][6] = nota;
        sexo[1][6] = novoSexo;
        for(i=0; i<7; i++){
            printf("%s %c %.1f\n", alunos[1][i], sexo[1][i], notas[1][i]);
        }
    }
    }




}


int main(){
    char alunos[2][6][100]= {{"Ana", "joao", "gabi", "luis", "marco", "lucas"}, {"roni", "harry", "jon", "daniel", "lais", "aline"}};
    char sexo[2][6]= {{'f', 'm', 'f', 'm', 'm', 'm'}, {'m', 'm', 'm', 'm', 'f', 'f'}};
    float notas[2][6]= {{10, 6.5, 7, 8.6, 9, 4}, {4, 7, 8, 3, 9, 5}};
    char projeto[2][6];

    int i, j, cont1=0, cont2=0, t=0, escolha;

    for(i=0; i<6; i++){
        if(sexo[0][i]== 'f') cont1++;
        if(sexo[1][i]=='f') cont2++;
    }
    if(cont1>cont2) printf("\nA equipe 1 tem mais mulheres\n");
    else if(cont1<cont2) printf("\nA equipe 2 tem mais mulheres\n");
    else printf("\nAs equipes tem a mesma quantidade de mulheres\n");

    printf("\nAlunas selecionadas para o projeto:\n");
    for(i=0; i<2; i++){
        for(j=0; j<6; j++){
            if(sexo[i][j]=='f' && notas[i][j] >= 8.0){
                strcpy(projeto[t], alunos[i][j]);
                t++;
            }
        }
    }
    for(i=0; i<2; i++){
        printf("%s\n", projeto[i]);
    }


    printf("\nNovas notas\n");
    acrescenta(sexo[1], notas[1]);
    for(i=0; i<6; i++){
        printf("%.1f ", notas[1][i]);
    }


    adiciona(alunos, sexo, notas);
    
    
}