#include <stdio.h>
#include <stdlib.h>

int main()
{
    float y, x1, xi,xi1, raiz;
    
    printf("digite o numero que voce deseja saber a raiz:");
    scanf("%f", &y);
    
    x1=y/2;
    xi=x1-((x1*x1-y)/(2*x1));
    
    while((xi-x1)>=0.1){
    	raiz= x1+xi;
    	xi1=xi;
    	xi=x1;
	}
	printf("%.3f", raiz);
    
    
    return 0;
}
