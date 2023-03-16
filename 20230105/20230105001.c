#include <stdio.h>
#include <stdlib.h>

int scanIntIntervalo(){
    int x;
    printf("Digite um valor entre 0 e 1000: ");
    scanf("%i", &x);
    while(x<0 || x>1000){
        printf("digite apenas valor entre 0 e 1000, tente novamente: ");
        scanf("%i", &x);
    }
    return x;
}

int percentual(int x, int y) {
    int maior, menor, percent;
    if(x<y){
        maior = y;
        menor = x;
    }else{
        if(x>y){
            maior=x;
            menor=y;
        }else{
            maior=x;
            menor=y;
        }
    }
    percent = (menor*100)/maior;

    return percent;

}

int absdif(int x,int y){
    int maior, menor, diferenca;

    if(x<y){
        maior = y;
        menor = x;
    }else{
        if(x>y){
            maior=x;
            menor=y;
        }else{
            maior=x;
            menor=y;
        }
    }
    diferenca = maior-menor;

    return diferenca;
}

int main(){
    int x, y, diferenca, perc;


    x = scanIntIntervalo();
    y = scanIntIntervalo();

    perc = percentual(x,y);

    diferenca = absdif(x, y);


    printf("O menor numero representa %i por cento do maior\n", perc);
    printf("A diferenca absoluta e de: %i", diferenca);


}

