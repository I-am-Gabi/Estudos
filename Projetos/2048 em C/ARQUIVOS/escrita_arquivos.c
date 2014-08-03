#include <stdio.h>
#include "escrita_arquivos.h"

void gerar_arquivo_volta(int matriz[4][4]){
/* Subrotina para gerar arquivo estado anterior
da matriz para voltar jogada durante o jogo */
	FILE * file_matriz;
	file_matriz = fopen("matriz_ant.2048", "wt");

	int i=0,j=0;

	 for (i=0;i < 4; ++i){
		for (j=0;j < 4; ++j ) {

			fprintf(file_matriz,"%X %X %X\n",((i*-5)-1) ,((j*-5)-1),((matriz[i][j]*-5)-1));
			/* escrever no arquivo estado da matriz em hexadecimal e com criptografia para
			dificultar que o usuário altere os valores no arquivo */
		}
	}

	fclose(file_matriz);

}

void gerar_arquivo_matriz(int matriz[4][4]){

	FILE * file_matriz;
	file_matriz = fopen("estadomatriz.2048", "wt");

	int i=0,j=0;

	 for (i=0;i < 4; ++i){
		for (j=0;j < 4; ++j ) {

			fprintf(file_matriz,"%X %X %X\n",((i*-5)-1) ,((j*-5)-1),((matriz[i][j]*-5)-1));
			/* escrever no arquivo estado da matriz em hexadecimal e com criptografia para
			dificultar que o usuário altere os valores no arquivo */

		}
	}

	fclose(file_matriz);

}

void salvar_score(int score){

	FILE * file_matriz;
	file_matriz = fopen("score.2048", "wt");

	fprintf(file_matriz,"%x", ((score*512)-6));
	/* Salva o score em um arquivo e com criptografia para
	que o usuário não altere o valor do score */

	fclose(file_matriz);

}

void salvar_score_best(int best){

	FILE * file_matriz;
	file_matriz = fopen("best.2048", "wt");

	fprintf(file_matriz,"%x", ((best*512)-6));
	/* Salva o score em um arquivo e com criptografia para
	que o usuário não altere o valor do score */

	fclose(file_matriz);

}

