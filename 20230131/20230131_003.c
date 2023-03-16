/*20230131_003. Leia uma cadeia de caracteres no formato �DD/MM/AAAA� e copie o dia, m�s e ano 
para 3 vari�veis inteiras. Antes disso, verifique se as barras est�o no lugar certo, 
e se DD, MM e AAAA s�o num�ricos.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char data[11];
  int dia, mes, ano;


  printf("Informe a data no formato DD/MM/AAAA: ");
  scanf("%s", &data);

  if (strlen(data) != 10 || data[2] != '/' || data[5] != '/' || !isdigit(data[0]) || !isdigit(data[1]) || !isdigit(data[3]) || !isdigit(data[4]) || !isdigit(data[6]) || !isdigit(data[7]) ||!isdigit(data[8]) || !isdigit(data[9])) {
    printf("DATA INVALIDA\n");
    
  }else{
  	dia = (data[0] - '0') * 10 + (data[1] - '0');
  	mes = (data[3] - '0') * 10 + (data[4] - '0');
  	ano = (data[6] - '0') * 1000 + (data[7] - '0') * 100 + (data[8] - '0') * 10 + (data[9] - '0');

  	printf("DIA: %d \nMES: %d \nANO: %d", dia, mes, ano);
  }
  

  return 0;
}
