#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrizA[5][5] = {{1,1,1,1,1},{2,2,2,2,2}, {3,3,3,3,3}, {4,4,4,4,4}, {5,5,5,5,5}};
    int i, j;
    int dp=0, ds=0, s4=0, s2=0, semDP;
    int vetorDP[5], vetords[5];

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(j==i){
                vetorDP[i] = matrizA[i][j];
            }
            if(i+j == 4){
                vetords[i] = matrizA[i][j];
            }
            if(i==3){
                s4+= matrizA[i][j];
            }
            if(i==1){
                s2+= matrizA[i][j];
            }
        }

    }

    printf("DIAGONAL PRINCIPAL = ");
    for(i=0; i<5; i++){
        printf("%d", vetorDP[i]);
    }
    printf("\n");

    printf("DIAGONAL SECUNDARIA = ");
    for(i=0; i<5; i++){
        printf("%d", vetords[i]);
    }
    printf("\n");


    printf("Soma da linha 4 = %d \nSoma da linha 2 = %d\n", s4, s2);
    
    
    printf("SEM DIAGONAL PRINCIPAL: \n");
    for(i=0; i<5; i++){
    	for(j=0; j<5; j++){
    		if(i!=j){
    			printf("%d", matrizA[i][j]);
			}
		}
		printf("\n");
	}


    return 0;
}
