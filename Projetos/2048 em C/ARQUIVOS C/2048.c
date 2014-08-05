#include <stdio.h>  /* Biblioteca padrão da linguagem C */
#include <stdlib.h>  /* Bibloteca para utilizar srand() e rand() */
#include <ncurses.h> /* Biblioteca ncurses */
#include "imprimir_preencher.h" /* Bibloteca para imprimir/preencher a matriz */
#include "mover_matriz.h" /* Biblioteca para mover a matriz */
#include "controlar_matriz.h" /* Biblioteca para controlar a matriz */
#include "escrita_arquivos.h" /* Biblioteca para gerar arquivos */
#include "leitura_arquivos.h" /* Biblioteca para ler arquivos */
#include "menu_principal.h" /* Biblioteca com menu e início de jogo */

int scoreglobal = 0; //o extern dele é declarado em mover_matriz.h
int scorebest = 0; //extern declarado em mover_matriz.h
int choose_menu = 0;

int main () {

  	scorebest = ler_best();

	initscr(); /* Inicializa módulos do ncurses */

	clear(); /* limpa a tela em ncurses */

	choose_menu = imprime_menu(); /* Imprime menu principal e recebe a escolha do usuário */
	escolhas_menu(choose_menu); /* Realiza a operação desejada */

	return 0;

}
