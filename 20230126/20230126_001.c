#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1[3][5] = {{1, 2, 3, 4, 5}, {1,2,3,4,5}, {1, 2, 3, 4, 5}};
    int m2[3][5] = {{1, 2, 3, 4, 5}, {1,2,3,4,5}, {1, 2, 3, 4, 5}};
    int s[3] [5];

    int i, j;

    for(i=0; i<3; i++){
        for(j=0; j<5; j++){
            s[i][j] = m1[i][j] + m2[i][j];
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<5; j++){
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }




    return 0;
}
