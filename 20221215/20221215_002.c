//media
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, nota4, media;

    printf("Digite suas 4 notas bimestrais: ");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    media = (nota1+nota2+nota3+nota4)/4;

    printf("sua media bimestral e: %.1f", media);

    return 0;
}
