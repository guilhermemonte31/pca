#include <stdio.h>
#include <stdlib.h>
int main() {

    int num, somaImpar=0, somaPar=0;
    
    printf("digite um numero: ");
    scanf("%d", &num);
    if(num%2==0){
			somaPar += num;
		}else{
			somaImpar += num;
		}
    
    while(num <= 1000){
		printf("digite um numero: ");
    	scanf("%d", &num);
    	if(num%2==0){
			somaPar += num;
		}else{
			if(num%2!=0 && num <1000){
				somaImpar += num;
			}
			
		}
	}
	
	printf("Voce digitou um numero maior que mil, e por isso o programa foi encerrado!\n");
	printf("A soma dos impares vai ser: %d \nA soma dos pares vai ser: %d", somaImpar, somaPar);
    
    
	return 0;

}

