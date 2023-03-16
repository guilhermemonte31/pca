#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, prodN1N2, r1, somaN1R1, r1Cubo;

    printf("informe dois numeros inteiros: ");
    scanf("%f %f", &n1, &n2);

    printf("informe um numero real: ");
    scanf("%f", &r1);

    prodN1N2 = (2*n1) + (n2/2);

    somaN1R1 = (3*n1) + r1;

    r1Cubo = r1*r1*r1;

    printf("O PRODUTO DO DOBRO DO PRIMEIRO COM A METADE DO SEGUNDO E %.1f \n", prodN1N2);
    printf("A SOMA DO TRIPLO DO PRIMEIRO COM O TERCEIRO E %.1f \n", somaN1R1);
    printf("O CUBO DO TERCEIRO E %.1f \n", r1Cubo);



    return 0;
}
