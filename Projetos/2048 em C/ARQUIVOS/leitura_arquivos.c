#include <stdio.h>
#include "leitura_arquivos.h"
#include "escrita_arquivos.h"

typedef struct {
  int i;
  int j;
  int valor;
} leitura;

leitura mat;

void ler_arquivo_volta(int matriz[4][4]){
	/* Faz a leitura para voltar à jogada anterior */

	FILE *estadomatriz; /* inicia arquivo */

	estadomatriz = fopen("matriz_ant.2048", "r");
	if (estadomatriz == NULL){
		gerar_arquivo_volta(matriz);
	}
	else {
		while( (fscanf(estadomatriz,"%X %X %X\n", &mat.i, &mat.j, &mat.valor))!= EOF){
			mat.i = ((mat.i+1)/-5); /* faz decriptografia */
			mat.j = ((mat.j+1)/-5); /* faz decriptografia */
			mat.valor = ((mat.valor+1)/-5); /* faz decriptografia e associa valor*/
			matriz[mat.i][mat.j] = mat.valor; /* joga valor na matriz */
		}
	}
	fclose(estadomatriz); /* fecha arquivo */
}

void ler_arquivo_mat(int matriz[4][4]){
	FILE *estadomatriz; /* inicia arquivo */

	estadomatriz = fopen("estadomatriz.2048", "r");
	if (estadomatriz == NULL){
		gerar_arquivo_matriz(matriz);
	}
	else {
		while( (fscanf(estadomatriz,"%X %X %X\n", &mat.i, &mat.j, &mat.valor))!= EOF){
			mat.i = ((mat.i+1)/-5); /* faz decriptografia */
			mat.j = ((mat.j+1)/-5); /* faz decriptografia */
			mat.valor = ((mat.valor+1)/-5); /* faz decriptografia e associa valor*/
			matriz[mat.i][mat.j] = mat.valor; /* joga valor na matriz */
		}
	}
	fclose(estadomatriz); /* fecha arquivo */
}

int ler_score(void){
	int score, valor;
	FILE *estadoscore; /* inicia arquivo */

	estadoscore = fopen("score.2048", "r");
	if (estadoscore == NULL){
		salvar_score(0);
	}
	else {
		while( (fscanf(estadoscore,"%x", &valor))!= EOF){
			valor = ((valor+6)/512); /* faz decriptografia */
			score = valor;
		}
	}

	fclose(estadoscore); /* fecha arquivo */
	return score;
}

int ler_best(void){
	int valor;
	FILE *bestscore; /* inicia arquivo */

	bestscore = fopen("best.2048", "r");

	if (bestscore == NULL){
		salvar_score_best(0);
	}
	else {
		while( (fscanf(bestscore,"%x", &valor))!= EOF){
			valor = ((valor+6)/512); /* faz decriptografia */
		}
	}

	fclose(bestscore); /* fecha arquivo */
	return valor;
}