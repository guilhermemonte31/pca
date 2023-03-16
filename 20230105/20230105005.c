#include <stdio.h>
#include <stdlib.h>

int fib(int num){
	
	int cont, f1=1, f2=1, soma;
	for(cont=3; cont<=num; cont++){
		soma=f1+f2;
		f1=f2;
		f2=soma;
	}
	return f2;
}


int main(){
	
	int n;
	
	
	printf("voce deseja saber o valor de qual posicao?");
	scanf("%d", &n);
	
	printf("\n%d", fib(n));
	
	
	
	return 0;
}
