#include <stdio.h>
int main(){
    
    int n, m;
    printf("digite os valores de m e n: ");
    scanf("%d %d", &m, &n);
    int x=0, y=0, max=0;
    int maxX=x, maxY=y;
    
    while(x<=m){
    	while(y<=n){
    		int eq= x*y - x*x +y;
    		if(eq>max){
    			max=eq;
    			maxX=x;
    			maxY=y;
			}
			y++;
		}
		x++;
		y=0;
	}
    printf("Max= %d\nX= %d\nY= %d", max, maxX, maxY);
}
