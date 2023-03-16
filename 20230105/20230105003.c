#include <stdio.h>
#include <stdlib.h>

int verificaPar(){
	int num;
	printf("digite um numero par: ");
	scanf("%d", &num);
	while(num%2!=0){
		printf("\ntente novamente. digite um numero par: ");
		scanf("%d", &num);		
	}
	return num;
}

void verificaPerf(int x){
	
	int cont=0, soma=0;
	
	for(cont=1; cont<=x; cont++){
		if(x%cont==0){
			soma+= cont;
		}
		
	}
	if((soma-x)==x){
		printf("o numero %d e perfeito", x);
	}
	else{
		printf("o numero %d nao eh perfeito", x);
	}
}



int main(){
	int n;
	
	n=verificaPar();
	verificaPerf(n);
	
    return 0;
}
