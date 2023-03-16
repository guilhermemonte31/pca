#include <stdio.h>
#include <stdlib.h>

int pegaRepeticao(int n, int d){
    int cont = 0, resto;

    while(n) {
        resto = n%10;
        if(resto == d){
            cont+= 1;
        }
        n /= 10;
    }


    return cont;
}

int verificaPermut(int a, int b){
	int verificacao = 1, i;
	
	for(i=1; i<=9; i++){
		if(pegaRepeticao(a,i) != pegaRepeticao(b, i)){
			verificacao = 0;
		}
	}
	return verificacao;
}

int main()
{
    int n, d, repete, perm;
    printf("Digite dois numeros para verificar a permutacao: ");
    scanf("%d %d", &n, &d);
    perm = verificaPermut(n, d);
    if(perm!=0){
    	printf("%d eh permutacao de %d", d, n);
	}else{
		printf("%d nao eh permutacao de %d", d, n);
	}
    return 0;
}


