#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int main(){
	
	char frase[MAX];
	int i=0, u;
	
	printf("Digite uma frase: ");
	scanf("%[^\n]", &frase);
	u = strlen(frase);
	while (i<=u){
		if(frase[i]>='a' && frase[i]<='z'){
			frase[i]-= 29;
		}
		else{
			if(frase[i]>='A' && frase[i]<= 'Z'){
				frase[i] += 3;
			}
			else{
				if(frase[i] == ' '){
				}
			}
		}
		printf("%c", frase[i]);
		i++;
	}
}
