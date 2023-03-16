//area do quadrado
#include <stdio.h>
#include <stdlib.h>
int main() {

    float lado, areaQ, dobroArea;

    printf("digite o tamanho do lado do quadrado em cm: ");
    scanf("%f", &lado);

    areaQ = lado * lado;
    dobroArea = 2*areaQ;

    printf("a area sera de %.1f cm quadrados e o dobro dessa area e %.1f cm quadrados", areaQ, dobroArea);
	return 0;

}
