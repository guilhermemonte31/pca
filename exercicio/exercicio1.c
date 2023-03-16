#include <stdio.h>
#include <stdlib.h>


int main()
{
 float area,base,altura;


 printf("BASE: \n");
 scanf("%f",&base);

 printf("ALTURA: \n");
 scanf("%f",&altura);


 area=(base*altura)/2;

 printf("\n AREA: %.1f\n",area);
 return 0;

}
