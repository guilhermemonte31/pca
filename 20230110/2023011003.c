#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void verifica(int x, int y){
	
	int digitosY, teste, resto, quant;
	
	teste = y;
	
	while(teste>0){
		digitosY++;
		teste /=10;
	}
	quant = pow(10, digitosY);
	resto = x%quant;
	
	if(resto == y){
		printf("Corresponde");
	}else{
		printf("Nao corresponde");
	}
}
int main(){
	int x, y;
	int digitosY, teste;
	
	printf("Digite valores para X e Y respectivamente: ");
	scanf("%d %d", &x, &y);
	
	verifica(x, y);
}
