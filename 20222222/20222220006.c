
#include <stdio.h>
#include <stdlib.h>
int main() {

    int num1, num2;
	
	for(num1=1; num1<=9; num1++){
		for(num2=0; num2<=10; num2++){
			printf("%d x %d = %d  \n", num1, num2, num1*num2);
		}
		printf("--------------- \n");
	}
    
    
    
	return 0;

}
