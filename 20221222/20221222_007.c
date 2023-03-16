#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tempo, tempoH, tempoM, tempoS;
    float massai, massaf; 
    
    printf("massa inicialem gramas: ");
    scanf("%f",&massai);
    
    massaf=massai;
    
    while(massaf>=0.5){
    	massaf -= (massaf/2);
    	tempo += 50;
    	
	}
	tempoH = tempo/3600;
	tempoM = (tempo%3600)/60;
	tempoS = (tempo%3600)%60;
	
	printf("massa inicial: %f g\n massa final: %f g\n tempo: %d h %d min %d seg", massai, massaf, tempoH,tempoM, tempoS);
	
    
    return 0;
}
