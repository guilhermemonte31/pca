#include <stdio.h>
#include <stdlib.h>

void fat(){
	int n, cont, fatorial=1;
	printf("diigite um numero n: ");
	scanf("%d", &n);
	
	for(cont=1; cont<=n; cont++){
		fatorial = fatorial*cont;
		
	}
	printf("n! = %d", fatorial);
}


int main(){	
	
	
	fat();
	
    return 0;
}
