#include <stdio.h>
#include <stdlib.h>

int main(){
	int v[]={1,2,3,4,5};
	int i, tamanho = 5;
	
	for(i=tamanho-1;i>=0;i--){
		printf("%d", v[i]);
	}
	return 0;
}
