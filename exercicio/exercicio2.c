#include <stdio.h>
#include <stdlib.h>

int main()
{
 float salario, reajuste;

 printf("DIGITE SEU SALARIO ATUAL: \n");
 scanf("%f", &salario);
 reajuste = (0.1*salario) + salario;

 printf("SEU NOVO SALARIO COM REAJUSTE DE 10 POR CENTO SERA DE R$ %.1f \n", reajuste);

 return 0;

}
