
#include <stdio.h>
#include <stdlib.h>
int main() {

    float exerc1, exerc2, exerc3, maior, menor, media;
    
    printf("exercicio 1: ");
    scanf("%f", &exerc1);
    maior = exerc1;
    menor = exerc1;
    
	printf("exercicio 2: ");
    scanf("%f", &exerc2);
    printf("exercicio 3: ");
    scanf("%f", &exerc3);
    
    media = (exerc1+exerc2+exerc3)/3;
    
    if(exerc2 < menor){
		menor = exerc2;
	} else{
		if(exerc2>maior){
			maior = exerc2;
		}
	}
	
	if(exerc3 < menor){
		menor = exerc3;
	} else{
		if(exerc3>maior){
			maior = exerc3;
		}
	}
	
	
	printf("MAIOR: %.1f MENOR: %.1f MEDIA: %.1f", maior, menor, media);
    
	return 0;

}


