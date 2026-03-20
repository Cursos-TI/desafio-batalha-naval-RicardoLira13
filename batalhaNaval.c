#include <stdio.h>

int main(){

    //criando a matriz do tabuleiro e do vertos dos navios
    int tabuleiro[10][10];
    int navio_horizontal[3] = {3, 3, 3};
    int navio_vertical[3] = {3, 3, 3};
    int navio_diagonal1[3] = {3, 3, 3};
	int navio_diagonal2[3] = {3, 3, 3};

    //for que transforma todos os valores do tabuleiro em 0
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }

    //colocando o navio no tabuleiro
    tabuleiro[6][2] = navio_horizontal[0];
    tabuleiro[6][3] = navio_horizontal[1];
    tabuleiro[6][4] = navio_horizontal[2];

    tabuleiro[3][5] = navio_vertical[0];
    tabuleiro[4][5] = navio_vertical[1];
    tabuleiro[5][5] = navio_vertical[2];
    
    //dois navios na diagonal
    tabuleiro[0][0] = navio_diagonal1[0];
    tabuleiro[1][1] = navio_diagonal1[1];
	tabuleiro[2][2] = navio_diagonal1[2];

	tabuleiro[9][0] = navio_diagonal2[0];
    tabuleiro[8][1] = navio_diagonal2[1];
	tabuleiro[7][2] = navio_diagonal2[2];
	
    //printando o tabuleiro na tela
    printf("***** TABULEIRO BATALHA NAVAL *****\n\n");

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    
    return 0;
}