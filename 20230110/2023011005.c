#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int transformaBinario(int bin){
	int decimal=0, i=0, resto;
	
	while(bin != 0){
		resto = bin%10;
		bin/= 10;
		decimal += resto*pow(2,i);
		i++;
		printf("\nresto: %d \nbinario: %d \ndecimal: %d \ni: %d\n----\n", resto, bin, decimal, i);
	}
	return decimal;
}

int main(){
	int binario;
	
	printf("digite o numero binario (com 0 e 1): ");
	scanf("%d", &binario);
	printf("o decimal e: %d", transformaBinario(binario));
	
	
}
