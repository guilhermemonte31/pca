/*20230314_001
Faça um programa que calcula a média e o desvio padrão das notas de uma turma;
- O programa deve solicitar no início a quantidade de alunos na turma e alocar dinamicamente um vetor de float onde as
  notas dos alunos digitadas devem ser armazenadas;
- Você deve criar uma função “mediaDesvio” para calcular a média e o desvio padrão e retornar estes valores através de parâmetros
  passados por referência (ponteiros). A função recebe como parâmetro o ponteiro para o vetor,
  a quantidade de elementos no vetor, e dois ponteiros: media e desvio onde deve guardar os resultados;*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mediaDesvio(float *notas, int alunos,float *md,float *dp ){
        float soma, media;
        int i;

        for(i=0; i<alunos; i++){
            soma += notas[i];
        }
        *md = soma/alunos;
        printf("MEDIA= %.1f\n", *md);
        
        
        soma=0;
        for(i=0; i<alunos; i++){
            soma = pow
        }
        

}

int main()
{
    int  i, alunos;
    float *notas;
    float soma=0, md, dp;

    printf("Digite a quantidade de alunos: ");
    scanf("%i", &alunos);

    notas = (float *) malloc (alunos * sizeof(float));
    for(i=0; i<alunos; i++){
        printf("Nota do %d aluno: ", i+1);
        scanf("%f", (notas+i));
    }

    mediaDesvio(notas, alunos, &md, &dp);
    return 0;
}
