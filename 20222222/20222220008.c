#include <stdio.h>
#include <stdlib.h>
int main() {

	float n1, n2, n3, media;
	int repetir=1, continuar;
	
	while(repetir){
		printf("insira 3 notas:  \n");
		scanf("%f %f %f", &n1, &n2, &n3);
		
		media = (n1+n2+n3)/3;
		
		printf("MEDIA: %.1f \n", media);
		
		printf("deseja continuar? (1- sim; 2- nao) \n");
		scanf("%d", &continuar);
		
		if(continuar != 1){
			repetir =0;
		}
	}
	
	
	
	
	    
	return 0;

}
