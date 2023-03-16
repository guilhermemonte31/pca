//converte metros
#include <stdio.h>
#include <stdlib.h>
int main() {

	float metros, cent;

	printf("Digite quantos metros vc deseja converter para centimetros: ");
	scanf("%f", &metros);

	cent = metros * 100;

	printf("%.2f metro(s) sera %.2f centimetro(s)", metros, cent);

	return 0;

}
