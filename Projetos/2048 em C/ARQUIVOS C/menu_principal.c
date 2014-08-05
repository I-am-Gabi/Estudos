#include <stdio.h>
#include <ncurses.h>
#include "leitura_arquivos.h"
#include "controlar_matriz.h"
#include "imprimir_preencher.h"
#include "menu_principal.h"

int matriz[4][4] = {0};
int i,j;


void iniciar_jogo(){
	clear(); /* limpa tela */
	preenche_mat(matriz); /* preenche matriz com 2 ou 4 */
	preenche_mat(matriz); /* preenche matriz com 2 ou 4 */
	imprime_mat(matriz); /* imprime a matriz */
	comandar_mat(matriz); /* chama função de comandar a matriz */
}

void retornar_jogo(){
	clear(); /* limpa a tela */
	scoreglobal = ler_score(); /*Lê o score do jogo salvo */
	ler_arquivo_mat(matriz); /* ler o arquivo do jogo salvo */
	imprime_mat(matriz); /* imprime a matriz */
	comandar_mat(matriz); /* chama função de comendar a matriz */
}

void creditos_jogo(){
		initscr(); /* inicia módulos do ncurses */
		start_color(); /* inicia as cores ncurses */
		clear(); /* limpa a tela */
		init_pair(40,COLOR_GREEN,COLOR_BLACK); /* declara cor 40 */
		init_pair(41,COLOR_YELLOW,COLOR_BLACK); /* declara cor 41 */
		init_pair(42,COLOR_RED,COLOR_BLACK); /* declara cor 42 */
		attron(COLOR_PAIR(40)); /* inicializa cor 40 */
        mvprintw(1, 18,"Projeto de conclusão das matérias:");
        mvprintw(3, 0,"Introdução as técnicas de programação, ministrada pelos Docentes:");
        mvprintw(7, 0,"Praticas de Técnicas de Programação, ministrada pelos Docentes:");
        mvprintw(11, 0, "Desenvolvimento completo:");
        attroff(COLOR_PAIR(40)); /* finaliza cor 41 */
		attron(COLOR_PAIR(41)); /* inicializa cor 40 */
		mvprintw(0, 30,"CREDITOS");
        mvprintw(4, 5,"-João Carlos Xavier Junior");
        mvprintw(5, 5, "-Andre Mauricio Cunha Campos");
        mvprintw(8, 5,"-Wellington Silva de Souza");
        mvprintw(9, 5,"-Andre Mauricio Cunha Campos");
        mvprintw(12, 5,"-Henrique Maraschin Granja, Matrícula: 2014047254");
        mvprintw(13, 5, "-Roberto Anrafell Araujo Dantas, Matrícula: 2014027940");
        attroff(COLOR_PAIR(41)); /* finaliza cor 41 */
		attron(COLOR_PAIR(42)); /* inicializa cor 42 */
        mvprintw(14,11,"");
        mvprintw(15,5,"Tecle '1' para voltar ao menu principal");
        mvprintw(16,5,"Tecle '2' para JOGAR!!");
        mvprintw(17,5,"Tecle '8' para sair");
        attroff(COLOR_PAIR(42));/* finaliza cor 42 */
}

void escolhas_menu(int opcao){
/* essa função recebe a opção desejada e realiza as operações */
	int opcoes_creditos;
	if (opcao == 2 || opcao == 0 || opcao == 4 || opcao == 8 || opcao){
		switch (opcao){
			case 2: {
				iniciar_jogo(); /* inicia tela de um novo jogo */
				break;
			}
			case 0: {
				retornar_jogo(); /* chama função para continuar jogo */
				break;
			}
			case 4: {
				creditos_jogo(); /* imprime a tela de créditos */
       			opcoes_creditos = getch() - '0'; /* Recebe tecla do usuario
       			como é um valor numérico, é necessário subtrair '0' para
       			capturar o valor númerico */
        		if (opcoes_creditos == 1){
        			opcoes_creditos = imprime_menu();
        			escolhas_menu(opcoes_creditos);
        		}
        		else {
        			escolhas_menu(opcoes_creditos);
       			 }
				break;
			}
			case 8:{
				endwin();
				break;
			}
			case '*'-'0':{
				for (i=0; 4 > i; ++i){
				for (j=0; 4> j; ++j){
					matriz[i][j] = 1024;
				}
			}
					clear();
					imprime_mat(matriz);
					comandar_mat(matriz);
			}
			default:{
				endwin(); // SE NÃO FOR NENHUMA DAS OPÇÕES FECHA O JOGO;
			}

		}
	}
	else {

	}


	}
