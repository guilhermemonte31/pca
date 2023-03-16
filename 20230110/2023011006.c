#include <stdio.h>
#include <stdlib.h>



int transformaBinario(int decimal){
	
	int resto, i = 1, bin= 0;



    while (decimal != 0) {
        resto= decimal % 2;
        
        decimal= decimal / 2;
        
        bin += resto * i;
        
        i*= 10;
    }

	return bin;
}

int main(){
	int decimal, teste;
	
	printf("digite o numero em decimal: ");
	scanf("%d", &decimal);
	teste=transformaBinario(decimal);
	printf("%d em binario eh %d",decimal, teste);
	
}
