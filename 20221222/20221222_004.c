#include <stdio.h>
#include <stdlib.h>
int main() {

    int num, cont,primo=0;
    
    printf("digite um numero:");
    scanf("%d", &num);
    
    for(cont=1; cont<num; cont++){
		if(num%cont==0 && cont!=1){
			printf("%d e divisivel por %d\n",num, cont);
			primo +=1;
	 	}
	}
    if(primo!=0){
    	printf("o numero %d nao e primo", num);
	}else{
		printf("o numero %d e primo", num);
	}
	return 0;

}

