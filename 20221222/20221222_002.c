#include <stdio.h>
#include <stdlib.h>
int main() {

    float num, cont, maior, menor, teste;
    
    printf("digite um numero: ");
    scanf("%f", &teste);
    maior = teste;
    menor = teste;
    
    for(cont =1; cont<=14; cont++){
		printf("digite um numero: ");
    	scanf("%f", &num);
    	if(num >maior){
			maior = num;
		}else{
			if(num<menor){
				menor = num;
			}
		}
	}
	printf("maior: %f menor: %f", maior, menor);
    
	return 0;

}

