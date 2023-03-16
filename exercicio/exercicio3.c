#include <stdio.h>
#include <stdlib.h>


int main()
{
 float conta, garcom;

 printf("DIGITE AQUI O VALOR TOTAL DA CONTA: \n");
 scanf("%f", &conta);

 garcom = conta*0.15;
 printf("LOGO, PELA TAXA DE 15 POR CENTO, O GARCOM RECEBERA R$ %.1f", garcom);
 return 0;

}
