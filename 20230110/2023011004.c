#include <stdio.h>
#define TRUE 1
#define FALSE 0

int encaixa(int a, int b) {
  
  while (b != 0 && a % 10 == b % 10) {
    a = a/10;
    b = b/10;
  }

  if (b == 0)
    return TRUE;
  else
    return FALSE;

}

int main() {
  int a, b, subseq, maior, menor;

  printf("Digite dois inteiros positivos: ");
  scanf("%d %d", &a, &b);
  
  if (a > b) {
    maior = a;
    menor = b;
  }
  else {
    maior = b;
    menor = a;
  }    

  subseq = FALSE;
  while (maior >= menor) {
    if (encaixa(maior,menor) == TRUE)
      subseq = TRUE;
    maior = maior/10;
  }
  if (subseq == TRUE)
    printf("%d e' segmento de %d\n",b,a);
  else
    printf("%d nao e' segmento de %d\n",b,a);

  return 0;
}
