#include <stdio.h>
#include <stdlib.h>
int main() {

	float raio, area;

	printf("digite o raio do circulo em cm: ");
	scanf("%f", &raio);

	area = raio*raio*3.14;

	printf("A AREA SERA: %.1f cm quadrados", area);
	return 0;

}
