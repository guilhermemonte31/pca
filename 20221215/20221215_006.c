//salario
#include <stdio.h>
#include <stdlib.h>
int main() {

    float valorHora, hora, salarioMensal;

    printf("quanto vc ganha por hora? ");
    scanf("%f", &valorHora);

    printf("e quantas horas vc trabalha por mes? ");
    scanf("%f", &hora);

    salarioMensal = valorHora * hora;

    printf("logo, trabalhando %.1f horas por mes, com cada hora valendo R$%.1f, seu salario mensal sera de R$%.1f",hora, valorHora, salarioMensal);
	return 0;

}
