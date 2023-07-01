#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "posfixo.h"

int main(){
    char infixa[50];
    printf("Escreva uma expressao matematica: ");
    scanf(" %[^\n]", &infixa);
    imprimeExpressao(infixa);
    char *posfixa;
    int t = strlen(infixa);
    posfixa = malloc(t* sizeof(char));
    posfixa = montaPosfixa(infixa);
    printf("\nPOSFIXA FINAL= %s", posfixa);

    int resultado;
    resultado = CalculaPosfixa(posfixa);
    printf("\nRESULTADO DA POSFIXA: %d", resultado);
    
}

