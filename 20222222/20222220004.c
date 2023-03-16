#include <stdio.h>
#include <stdlib.h>
int main() {

    int num, cont, maior, menor, teste;
    
    printf("digite um numero: ");
    scanf("%d", &teste);
    maior = teste;
    menor = teste;
    
    for(cont =1; cont<=19; cont++){
		printf("digite um numero: ");
    	scanf("%d", &num);
    	if(num >maior){
			maior = num;
		}else{
			if(num<menor){
				menor = num;
			}
		}
	}
	printf("maior: %d menor: %d", maior, menor);
    
	return 0;

}


