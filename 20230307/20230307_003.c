/*20230307_003 Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char. 
Associe as vari�veis aos ponteiros (use &). Modifique os valores de cada vari�vel usando os ponteiros. 
Imprima os valores das vari�veis antes e ap�s a modifica��o.*/

#include <stdio.h>

int main(){
	
	int x = 3;
	char palavra= 'a';
	float y = 4.5;
	
	int *px;
	char *ppalavra;
	float *py;
	
	px = &x;
	ppalavra = &palavra;
	py = &y;
	
	printf("ANTES:  INTEIRO= %d   CHAR= %c   REAL= %f", x, palavra, y);
	
	*px = 5;
	*ppalavra = 'Z';
	*py = 12;
	
	printf("\n\nDEPOIS:  INTEIRO= %d   CHAR= %c   REAL= %f", x, palavra, y);
	
	
	return 0;
		
}
