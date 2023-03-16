#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numerador=1, denominador=1, divisao, soma=0, somaFinal;
    
    while(denominador<=49){
		printf("%.0f/%.0f + ", numerador, denominador);
		numerador +=2;
		denominador +=1;
		divisao = (numerador/denominador);
		soma += divisao;
		
	
	}
	printf("99/50 =\n");
	somaFinal=soma+99/50;
	printf("%.2f", somaFinal);
    return 0;
}
