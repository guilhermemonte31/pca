/*20230316_001 Crie uma fun��o que aloca e l� um vetor de n inteiros. 
Crie outra fun��o que recebe o vetor e retorna o maior e o menor valor. O programa principal deve executar as duas fun��es, 
imprimir os valores retornados pela 2� fun��o e liberar a mem�ria alocada pela 1� fun��o.*/


#include <stdio.h>
#include <stdlib.h>

int * aloca(int tamanho) {
    int *v, i;

    v = (int *) malloc (tamanho * sizeof(int));

    for(i=0; i<tamanho; i++){
        printf("v[%d]= ", i+1);
        scanf("%d", (v+i));
    }
    
    return v;

}

void menor_maior(int *v, int tamanho){
	int i, teste, j;
		
	for (i=0; i<tamanho; i++){
		for(j=0; j<i; j++){
			if(v[i] < v[j]){
				teste = v[i];
				v[i] = v[j];
				v[j] = teste;
			}
		}
	}
	
	printf("MAIOR= %d   MENOR= %d", v[tamanho-1], v[0]);

}


int main(){
    int *x, tamanho;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    
    x = aloca(tamanho);
    menor_maior(x, tamanho);
}
