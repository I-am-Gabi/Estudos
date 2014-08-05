#include <stdio.h> /* Biblioteca padrão */
#include <stdlib.h>  /* Biblioteca para utilizar srand() e rand() */
#include <ncurses.h> /* Biblioteca ncurses */
#include "leitura_arquivos.h"
#include "escrita_arquivos.h"
#include "imprimir_preencher.h"

typedef struct {
  int i;
  int j;
  int valor;
} pos;

void preenche_mat (int matriz[4][4]){
	/* FUNÇÃO PARA PREENCHER VALOR ALEATORIO 2 OU 4 */

	pos aleatorio; /* Declara aleatorio do tipo pos [OBS: TYPEDEF STRUCT pos] */

	srand(time(NULL));
	/* Semente adicionada para que seja sempre aleatório */
	while(1){
	/* Loop até que a condição do if seja verdadeira; */
		aleatorio.i=rand()%4;
		aleatorio.j=rand()%4;
		/* Gera um valor e faz o mod 4, garantindo que o valor será de 0 a 3; */
		aleatorio.valor=(rand()%4)+1;
		/*Gera um valor e faz (mod 4)+1, garantindo que que o valor seja de 1 a 4; */
		if(aleatorio.valor!=3 && aleatorio.valor!=1 && matriz[aleatorio.i][aleatorio.j]==0) break;
		/*Elimina a possibilidade de ser 1 ou 3, sobrando apenas 2 e 4; */
	}
	matriz[aleatorio.i][aleatorio.j] = aleatorio.valor;
	/* Preenche o valor encontrado no laço acima na matriz. */
}

int imprime_menu(){

	initscr(); /* Inicializa modulo ncurses */
	clear(); /* limpa a tela ncurses */
	start_color(); /* inicia modulos de cores ncurses */
	attron(A_BOLD); /* deixa em negrito */
 	//use_default_colors(); /* captura def. padrões de cores */

	init_pair(20,COLOR_WHITE,COLOR_GREEN); /* declara cor 20 */
	init_pair(21,COLOR_WHITE,COLOR_YELLOW); /* declara cor 21 */
	init_pair(22,COLOR_WHITE,COLOR_BLUE); /* declara cor 22 */
	init_pair(23,COLOR_WHITE,COLOR_RED); /* declara cor 23 */
	init_pair(24,COLOR_YELLOW,COLOR_BLACK);	 /* declara cor 30 */


	attron(COLOR_PAIR(24));/* inicializa cor 30 */
 		mvprintw(0,0, "-----------------------------------------------------------------------");
 		mvprintw(0,23, "MENU PRINCIPAL - 2048 GAME");
 		mvprintw(19,0, "-----------------------------------------------------------------------");
 	attroff(COLOR_PAIR(24)); /* finaliza cor 30 */

	attron(COLOR_PAIR(20));/* inicializa cor 20 */
		mvprintw(6,25,"  INICIAR O JOGO");
		mvprintw(6,41,"                               ");
		mvprintw(6,15," 2 ");
 	attroff(COLOR_PAIR(20)); /* finaliza cor 20 */
	attron(COLOR_PAIR(21)); /* inicializa cor 21 */
 		mvprintw(8,27,"  RETONAR JOGO");
		mvprintw(8,41,"                               ");
		mvprintw(8,17," 0 ");
 	attroff(COLOR_PAIR(21)); /* finaliza cor 21 */
	attron(COLOR_PAIR(22)); /* inicializa cor 22 */
 		mvprintw(10,31,"  CREDITOS");
 		mvprintw(10,41,"                               ");
		mvprintw(10,19," 4 ");
	attroff(COLOR_PAIR(22)); /* finaliza cor 22 */
	attron(COLOR_PAIR(23)); /* inicializa cor 23 */
 		mvprintw(12,35,"  SAIR DO JOGO");
		mvprintw(12,41,"                               ");
		mvprintw(12,21," 8 ");
	attroff(COLOR_PAIR(23)); /* finaliza cor 23 */

 	refresh();

 	return getch() - '0'; /* -'0' é para retornar valor numérico */

}

void imprime_estrutura_grafica(void){

 	initscr();/* initscr inicializa tela em ncurses */
 	start_color();/* inicializa modulos de cores em ncurses */
	attron(A_BOLD);	/* DEIXA OS VALORES EM NEGRITO */
	init_pair(12,COLOR_WHITE,COLOR_WHITE); /* declara cor 12 */
	init_pair(25,COLOR_GREEN,COLOR_BLACK);	/* declara cor 25 */
	init_pair(26,COLOR_BLACK,COLOR_YELLOW);	/* declara cor 26 */
	init_pair(27,COLOR_YELLOW,COLOR_BLACK);	/* declara cor 27 */
	init_pair(13,COLOR_BLACK,COLOR_BLUE);/* declara cor 13 */
	init_pair(14,COLOR_BLACK,COLOR_GREEN);/* declara cor 14 */
	init_pair(15,COLOR_BLACK,COLOR_MAGENTA);/* declara cor 15 */
	init_pair(16,COLOR_BLACK,COLOR_RED);/* declara cor 16 */
	init_pair(35,COLOR_YELLOW,COLOR_BLACK);


	int linhascontador=0;
 	while (linhascontador < 70){
 		/* ESSE WHILE IMPRIME OS TRAÇADOS QUE DIVIDE
 		A MATRIZ E O HUB */
 		/* VAI IMPRIMINDO TRAÇADO ATÉ LINHA 70 */
 		attron(COLOR_PAIR(25)); /* inicializa cor 25*/
 			mvprintw(0,32,"JOGO 2048");
 			mvprintw(0,linhascontador, "-");
 			mvprintw(2,linhascontador, "-");
 			mvprintw(17,linhascontador, "-");
 			mvprintw(19,linhascontador, "-");
 		/* IMPRIME AS 4 LINHAS QUE SEPARA O HUB DO JOGO */
 			mvprintw(1,linhascontador, " ");
 			mvprintw(18,linhascontador, " ");
 		/* PREENCHE OS ESPAÇOS ENTRE AS LINHAS */
 		attroff(COLOR_PAIR(25));/* finaliza cor 25 */
 		linhascontador++;
 	}

 		attron(COLOR_PAIR(35)); /* inicializa cor 35 */
	  	mvprintw(18,12,"       TECLAS 'w' 's' 'a' 'd' 'v' 'r' 'q'         ");
	  	mvprintw(4,14,"-------------------------------------------");
	  	mvprintw(15,14,"-------------------------------------------");
 		mvprintw(1,0, "  SCORE %.4d", scoreglobal);
 		mvprintw(1,58, "  BEST %.4d", scorebest);
 		attroff(COLOR_PAIR(35)); /* finaliza cor 35*/


 	linhascontador = 0;

}


void imprime_mat(int matriz[4][4]) {

			int i,j;
			gerar_arquivo_matriz(matriz); /* SALVA ESTADO DO JOGO */

	 		initscr(); /* initscr inicializa tela em ncurses */
			imprime_estrutura_grafica(); /* imprime estrutura */

 			start_color(); /* inicializa cores ncurses */
 			attron(A_BOLD); /* deixa tudo em negrito */

			init_pair(0, COLOR_RED, COLOR_RED); /* declara cor 0 */
			init_pair(1, COLOR_RED, COLOR_WHITE); /* declara cor 1 */
			init_pair(2, COLOR_WHITE, COLOR_RED);/* declara cor 2*/
			init_pair(3, COLOR_WHITE, COLOR_GREEN);/* declara cor 3 */
			init_pair(4, COLOR_WHITE, COLOR_BLUE);/* declara cor 4 */
			init_pair(5, COLOR_WHITE, COLOR_BLACK);/* declara cor 5 */
			init_pair(6, COLOR_WHITE, COLOR_MAGENTA);/* declara cor 6 */
			init_pair(7, COLOR_WHITE, COLOR_CYAN);/* declara cor 7 */
			init_pair(8, COLOR_BLACK, COLOR_WHITE);/* declara cor 8 */
			init_pair(9, COLOR_WHITE, COLOR_RED);/* declara cor 9 */
			init_pair(10, COLOR_WHITE, COLOR_GREEN);/* declara cor 10 */
			init_pair(11, COLOR_BLACK, COLOR_GREEN);/* declara cor 11 */
			init_pair(12,COLOR_RED,COLOR_BLACK);/* declara cor 12 */
			init_pair(13,COLOR_BLACK,COLOR_YELLOW);/* declara cor 13 */
			init_pair(14,COLOR_YELLOW,COLOR_BLACK);/* declara cor 14 */			
 
 	 for (i=0;i < 4; ++i){
		for (j=0;j < 4; ++j ) {
			if (matriz[i][j] != 0){
				switch (matriz[i][j]){
					case 2:{
						attron(COLOR_PAIR(1));
						mvprintw((5+i*3),(14+j*12)," %.4d ", matriz[i][j]);
						attroff(COLOR_PAIR(1));
						break;
					}
					case 4:{
						attron(COLOR_PAIR(2));
						mvprintw((5+i*3),(14+j*12)," %.4d ", matriz[i][j]);
						attroff(COLOR_PAIR(2));
						break;
					}
					case 8:{
						attron(COLOR_PAIR(3));
						mvprintw((5+i*3),(14+j*12)," %.4d ", matriz[i][j]);
						attroff(COLOR_PAIR(3));
						break;
					}
					case 16:{
						attron(COLOR_PAIR(4));
						mvprintw((5+i*3),(14+j*12)," %.4d ", matriz[i][j]);
						attroff(COLOR_PAIR(4));
						break;
					}
					case 32:{
						attron(COLOR_PAIR(5));
						mvprintw((5+i*3),(14+j*12)," %.4d ", matriz[i][j]);
						attroff(COLOR_PAIR(5));
						break;
					}
					case 64:{
						attron(COLOR_PAIR(6));
						mvprintw((5+i*3),(14+j*12)," %.4d ", matriz[i][j]);
						attroff(COLOR_PAIR(6));
						break;
					}
					case 128:{
						attron(COLOR_PAIR(7));
						mvprintw((5+i*3),(14+j*12)," %.4d ", matriz[i][j]);
						attroff(COLOR_PAIR(7));
						break;
					}
					case 256:{
						attron(COLOR_PAIR(8));
						mvprintw((5+i*3),(14+j*12)," %.4d ", matriz[i][j]);
						attroff(COLOR_PAIR(8));
						break;
					}
					case 512:{
						attron(COLOR_PAIR(9));
						mvprintw((5+i*3),(14+j*12)," %.4d ", matriz[i][j]);
						attroff(COLOR_PAIR(9));
						break;
					}
					case 1024:{
						attron(COLOR_PAIR(10));
						mvprintw((5+i*3),(14+j*12)," %.4d ", matriz[i][j]);
						attroff(COLOR_PAIR(10));
						break;
					}
					case 2048:{
						attron(COLOR_PAIR(13));
						mvprintw((5+i*3),(14+j*12)," %.4d ", matriz[i][j]);
						attroff(COLOR_PAIR(13));
						//attron(COLOR_PAIR(14));
						//mvprintw(18,19,"        VOCE VENCEU ! PARABENS !       ");
						//attroff(COLOR_PAIR(14));
					}
				}
			}
			else {
			/* CASO VALOR SEJA DIFERENTE */
			attron(COLOR_PAIR(25));
			mvprintw((5+i*3),(14+j*12),"   *   ", matriz[i][j]);
			refresh();
			attroff(COLOR_PAIR(25));
			}
		}
	}


}
