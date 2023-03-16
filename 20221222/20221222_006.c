#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, cont, soma=0;
    
    printf("digite o numero:");
    scanf("%d", &n);
    
    for(cont=1; cont<n; cont++){
    	if(n%cont==0){
    		soma+= cont;
		}
		
	}
    if(soma==n){
		printf("perfeito");
	}
	else{
		printf("nao perfeito");
	}
    return 0;
}
