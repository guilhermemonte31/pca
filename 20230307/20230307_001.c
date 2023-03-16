#include <stdio.h>


void imprimeVetor(float *inicio, float *fim){
		
	for(inicio; inicio <= fim; inicio++){
		printf("%.1f  ", *inicio);
	}
	
}

int main(){
	float v1[]= {1,2,3,4};
	float v2[]= {2,4,6,8};
	float v3[]= {4,5,6,7,8};
	int i, j;
	
	printf("voce deseja comecar a partir de qual posicao? ");
	scanf("%d", &i);
	printf("Ate qual posicao? ");
	scanf("%d", &j);
	
	printf("\nVETOR 1\n");
	imprimeVetor(&v1[i], &v1[j]);
	printf("\nVETOR 2\n");
	imprimeVetor(&v2[i], &v2[j]);
	printf("\nVETOR 3\n");
	imprimeVetor(&v3[i], &v3[j]);
	return 0;
	
}
