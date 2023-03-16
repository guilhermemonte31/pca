/*20230126_007 Os elementos aij de uma matriz inteira Anxn representam 
os custos de transporte da cidade i para a cidade j. Dados n itinerários, 
cada um com k cidades, calcular o custo total para cada itinerário.

Exemplo:
4    1    2    3
5    2    1    400
2    1    3    8
7    1    2    5

O custo do itinerário 0 3 1 3 3 2 1 0 é

a03 + a31 + a13 + a33 + a32 + a21 + a10 = 3 + 1 + 400 + 5 + 2 + 1 + 5 = 417*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int m[4][4]= {{4,1,2,3}, {5,2,1,400}, {2,1,3,8}, {7,1,2,5}};
	int i, c1, c2, k, iti=0;
	
	printf("Digite a quantidade de cidades: ");
	scanf("%d", &k);
	printf("Cidade 1: ");
	scanf("%d", &c1);
	
	for(i=1; i<k; i++){
		printf("Cidade %d: ", i+1);
		scanf("%d", &c2);
		iti += m[c1][c2];
		c1 = c2;
	}
	
	printf("O custo do itinerario informado sera = %d", iti);
}
