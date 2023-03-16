#include <stdio.h>
#include <stdlib.h>

float funcPeso(){
    float peso;

    printf("digite o peso da crianca em gramas: ");
    scanf("%f", &peso );

    return peso;
}

int funcSemana(){
    int semana;
    printf("Quantas semanas? ");
    scanf("%d", &semana);
    return semana;
}

void verifiSemanaPeso(float peso, int semana){
    if(peso<100 || semana<28){
        printf("Parto não deverá ser realizado, reavaliar clinicamente");
        return;
    }
    else{
	    if(peso>2500 && semana>28){
	        printf("Parto normal");
	    }
	    else{
	        if(peso>2500 && semana<=28){
	            printf("Parto Cesariana");
	        }
	        else{
	            if(1500<=peso && peso<=2000 && semana>36){
	                printf("Parto normal");
	            }
	            else{
	            	printf("Parto cesariana");
				}
	        }
	    }
	

	}
    
}


int main(){

    float p;
    int s;

    p= funcPeso();
    s= funcSemana();

    verifiSemanaPeso(p, s);




    return 0;
}
