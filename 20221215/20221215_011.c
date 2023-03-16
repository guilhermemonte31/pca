#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorHora, hora, salarioBruto, iRenda, inss, sindicato,salarioLiq;

    printf("Quanto voce ganha por hora? ");
    scanf("%f", &valorHora);

    printf("Quantas horas voce trabalha por mes? ");
    scanf("%f", &hora);

    salarioBruto = valorHora * hora;

    iRenda = 0.11*salarioBruto;
    inss = 0.08 * salarioBruto;
    sindicato = 0.05 * salarioBruto;
    salarioLiq = salarioBruto -iRenda - inss - sindicato;

    printf("SEU SALARIO BRUTO SERIA R$ %.1f. COM OS DESCONTOS APLICADOS, VOCE RECEBERA R$ %.1f", salarioBruto, salarioLiq);
    return 0;
}
