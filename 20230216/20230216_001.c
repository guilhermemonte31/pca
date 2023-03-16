/*20230216_001. Faça um programa criar a formação de uma equipe de futebol para um jogo. Os requisitos dão:
- A equipe tem 23 jogadores.
- Cada jogador tem uma função (3-Goleiro, 7-Defensa, 8-Médio Campo, 5-Atacante) .
- Cada jogador tem uma avaliação entre 0 e 10
a) Crie usando array as estruturas necessárias para representar essa informação num programa em C.
b) Inicializar as estruturas com os dados de uma equipe. Pode usar a informação do Flamengo 
(https://www.flamengo.com.br/elencos/elenco-profissional)
c) Crie e imprima uma formação  (1-Goleiro, 4-Defensa, 4-Médio Campo, 2-Atacante) para o jogo 
selecionado os jogadores em cada função com melhor avaliação.*/

#include <stdio.h>
#include <string.h>

void melhorGoleiro(char goleiro[3][120], float avGol[3]){
	int i, posicao;
	float maiorNota=0;
	char melhorGoleiro[120];
	
	for(i=0; i<3; i++){
		if(avGol[i]>maiorNota){
			maiorNota = avGol[i];
			posicao=i;
		}
	}
	strcpy(melhorGoleiro, goleiro[posicao]);
	printf("%s (%.1f)\n\n", melhorGoleiro, maiorNota);
}

void melhorDef(char defesa[7][120], float avDef[7]){
	int i, j;
    float teste;
    char testeJog[120];
    for(i=1; i<7; i++){
        for(j=0; j<6; j++){
            if(avDef[j]<avDef[j+1]){
                teste=avDef[j];
                strcpy(testeJog, defesa[j]);
                avDef[j]=avDef[j+1];
                strcpy(defesa[j], defesa[j+1]);
                avDef[j+1]=teste;
                strcpy(defesa[j+1], testeJog);
            }
        }
    }
    for(i=0; i<4; i++){
        printf("%s (%.1f)\n",defesa[i], avDef[i]);
    }
    
    printf("\n");
}

void melhorMeio(char meio[8][120], float avMeio[8]){
    int i, j;
    float teste;
    char melhorJog[120];

    for(j=0; j<8; j++){
        for(i=0; i<7; i++){
            if(avMeio[i+1]>avMeio[i]){
                teste=avMeio[i];
                strcpy(melhorJog, meio[i]);
                avMeio[i]= avMeio[i+1];
                strcpy(meio[i], meio[i+1]);
                avMeio[i+1]=teste;
                strcpy(meio[i+1], melhorJog);
            }
        }
    }
    for(i=0; i<4; i++){
        printf("%s (%.1f)\n", meio[i], avMeio[i]);
    }
    printf("\n");
}

void melhorAtaque( char ataque[5][120], float avAta[5]){
    int i, j;
    float nota;
    char jogador[120];

    for(j=0; j<5; j++){
        for(i=0; i<4; i++){
            if(avAta[i+1]>avAta[i]){
                nota = avAta[i];
                strcpy(jogador, ataque[i]);
                avAta[i] = avAta[i+1];
                strcpy(ataque[i], ataque[i+1]);
                avAta[i+1] = nota;
                strcpy(ataque[i+1], jogador);
            }
        }
    }

    for(i=0; i<2; i++){
        printf("%s (%.1f)\n", ataque[i], avAta[i]);
    }

}

int main(){
	
	//jogadores
	char goleiro[3][120] = {"Felipe Alves", "Jandrei", "Rafael"};
	char defesa[7][120] = {"Rafinha", "Igor Vinicius","Welington", "Arboleda", "Ferraresi", "Beraldo", "Diego Costa"};
	char meio[8][120] = {"Nestor", "Neves", "Luan", "Pablo Maia" , "Mendez", "Galoppo", "Welington Rato", "Talles"};
	char ataque[5][120] = {"Calleri", "Luciano", "Marcos Paulo", "David", "Erison"};
    
    //avaliações
	float avGol[3]= {7.5, 6, 7};
	float avDef[7]= {7, 7.5, 6.5, 8.5, 8, 7, 8};
	float avMeio[8]= {7, 6, 6.5, 6, 7.5, 8.5, 9.5, 6};
	float avAta[5]= {8.5, 7.5, 6, 6.5, 4}; 

	printf("\n*** TIME TITULAR ***\n");

	//chama funções para pegar os melhores
    	melhorGoleiro(goleiro, avGol);
    	melhorDef(defesa, avDef);
    	melhorMeio(meio, avMeio);
    	melhorAtaque(ataque, avAta);
    
	return 1;
}
