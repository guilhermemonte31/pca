#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 100

int main(){
	
	int v[TAMANHO];
	int vezes;
	int v1=0,v2=0,v3=0,v4=0,v5=0,v6=0;
	int i;
	printf("Quantidade de lancamentos: ");
	scanf("%d", &vezes);
	for(i=0; i<vezes; i++){
		printf("Digite o numero que apareceu no lancamento %d: ", i+1);
		scanf("%d", &v[i]);
		if(v[i]==1) v1+=1;
		if(v[i]==2) v2+=1;
		if(v[i]==3) v3+=1;
		if(v[i]==4) v4+=1;
		if(v[i]==5) v5+=1;
		if(v[i]==6) v6+=1;
	}
	printf("FACE 1: %d \nFACE 2: %d \nFACE 3: %d \nFACE 4: %d \nFACE 5: %d \nFACE 6: %d ", v1,v2,v3,v4,v5,v6);
	
	
	return 0;
}

