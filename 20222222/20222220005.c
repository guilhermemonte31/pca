#include <stdio.h>
#include <stdlib.h>
int main() {

    int num, cont, maior, menor, teste;
    
    printf("digite um numero: ");
    scanf("%d", &teste);
    
    maior = teste;
    menor = teste;
    if(teste<0){
		printf("nao e permitido numeros negativos, programa encerrado");
	}
	else{
		for(cont =1; cont<=4; cont++){
			printf("digite um numero: ");
	    	scanf("%d", &num);
	    	if(num<0){
				printf("nao e permitido numeros negativos, programa encerrado \n");
				break;
			}
	    	else{
		    	if(num >maior){
					maior = num;
				}else{
					if(num<menor){
						menor = num;
					}
				}
			}
		}
		
		printf("maior: %d menor: %d", maior, menor);		
	}
    
    
    
	return 0;

}
