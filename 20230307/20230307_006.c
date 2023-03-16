/*20230307_006 Crie uma fun��o para somar dois arrays. Esta fun��o deve receber dois arrays e retornar a soma em um terceiro array. 
Caso o tamanho do primeiro e segundo array seja diferente ent�o a fun��o retornar� ZERO (0). 
Caso a fun��o seja conclu�da com sucesso a mesma deve retornar o valor UM (1). 
Utilize aritm�tica de ponteiros para manipula��o do array.
*/

#include <stdio.h>
#define max 100

int soma(int x[], int y[], int tamanhox, int tamanhoy){
	int soma[max], i;
	
	if(tamanhox != tamanhoy){
		printf("Tamanhos diferentes, impossivel efetuar soma\n");
		return 0;
	}else{
		printf("SOMA= \n");
		for(i=0; i<tamanhox; i++){
			*(soma+i) = *(x+i) + *(y+i);
		}
		for(i=0; i<tamanhox; i++){
			printf("%d ", *(soma+i));
		}
		return 1;
	}
}




int main(){
	int x[max], y[max], tamanhox, tamanhoy, i, s;
	
	printf("Digite o tamanho do primeiro vetor: ");
	scanf("%d", &tamanhox);
	
	for(i=0; i<tamanhox; i++){
		printf("x[%d] = ", i);
		scanf("%d", (x+i));
	}
	
	printf("Digite o tamanho do segundo vetor: ");
	scanf("%d", &tamanhoy);
	
	for(i=0; i<tamanhoy; i++){
		printf("y[%d] = ", i);
		scanf("%d", (y+i));
	}
	
	s = soma(x, y, tamanhox, tamanhoy);


}
