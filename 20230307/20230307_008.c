/*20230307_008  Escreva uma função chamada troca que troca os valores dos parâmetros recebidos. 
Sua assinatura deve ser: void troca(float *a, float *b);*/

#include <stdio.h>

void troca(float *a, float *b){
    float teste;

    teste = *a; // valor de teste = conteudo do ponteiro a
    *a = *b; // valor de a = conteudo de b
    *b = teste; // conteudo de b = valor de teste


}

int main(){
    float a, b;

    printf("Digite um valor inteiro= ");
    scanf("%f", &a);
    printf("Digite outro valor inteiro= ");
    scanf("%f", &b);

    troca(&a, &b);

    printf("\n A= %.1f   B= %.1f", a, b);
}