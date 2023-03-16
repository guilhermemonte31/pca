#include <stdio.h>

int main()
{
    int c = 0, cat1, cat2, hip;
    printf("digite um numero inteiro positivo\n");
    scanf("%d", &c);
    for (hip = 3; hip <= c; hip++){
        for (cat1 = 2; cat1 < hip; cat1++){
            for (cat2 = 1; cat2 < cat1; cat2++){
                if ((cat1 * cat1 + cat2 * cat2) == (hip * hip)){
                    printf("%d eh a hipotanusa de catetos %d e %d\n", hip, cat1, cat2);
                }
            }
        }
    }
    return 0;    
}
