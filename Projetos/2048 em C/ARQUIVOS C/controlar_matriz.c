#include <stdio.h>
#include <ncurses.h>
#include "mover_matriz.h"
#include "leitura_arquivos.h"
#include "escrita_arquivos.h"
#include "imprimir_preencher.h"

int gameover = 0;
int venceu = 0;


int CasasVazias(int mat[4][4]) {
	/* FAZ A VERIFICAÇÃO SE HÁ ALGUM ESPAÇO VAZIO NA MATRIZ */
    int i,j;
    int contador=0;
    for (i=0;i<4; i++) {
        for (j=0;j<4; j++) {
            if (mat[i][j]==0) {
                return 1;
                /* SE TIVER ALGUM ESPAÇO VAZIO NA MATRIZ RETORNA 1 */
            }
        }
    }
    return 0;
    /* SE TODOS OS ESPAÇOS DA MATRIZ ESTIVEREM PREENCHIDOS RETORNA 0 */
}

int verificar_estado(int matriz[4][4]){
	/* ESSA FUNÇÃO VERIFICA SE AINDA É POSSÍVEL JOGAR
		VERIFICANDO SE AINDA HÁ POSSIBILIDADE DE MOVIMENTO */

	/* RETURN 0 se diferente ou RETURN 1 se verdadeiro */

	/* FAZ UMA CÓPIA DA MATRIZ ATUAL PARA UMA MATRIZ VERIFY */
	int i,j;
	int mat_verify[4][4];
	for (i=0; i < 4; ++i){
		for (j=0; j < 4; ++j){
			mat_verify[i][j] = matriz[i][j];
		}
	}
	/* OS COMANDOS ABAIXO MOVE A MATRIZ EM TODAS AS DIREÇÕES */
			/*Mover para CIMA */
			moveUP(matriz);
			/* Mover para BAIXO */
			girar_mat(matriz);
			girar_mat(matriz);
			moveUP(matriz);
			girar_mat(matriz);
			girar_mat(matriz);
			/* Mover para ESQUERDA */
			girar_mat(matriz);
			girar_mat(matriz);
			girar_mat(matriz);
			moveUP(matriz);
			girar_mat(matriz);
			/* Mover para DIREITA */
			girar_mat(matriz);
			moveUP(matriz);
			girar_mat(matriz);
			girar_mat(matriz);
			girar_mat(matriz);
	/* OS COMANDOS ACIMA MOVE A MATRIZ EM TODAS AS DIREÇÕES */

	/* APÓS MOVIMENTAR PARA TODOS OS LADOS VERIFICA SE TEM ALGUMA
		DIFERENÇA NA MATRIZ OU NÃO */
	for (i=0; i < 4; ++i){
		for (j=0; j < 4; ++j){
			if (mat_verify[i][j] != matriz[i][j]){
				return 0;
				/* SE TIVER ALGUMA DIFERENÇA NA MATRIZ RETORNA 0
					ISSO SIGNIFICA QUE AINDA PODE CONTINUAR O JOGO
					, OU SEJA, AINDA PODE MOV. A MATRIZ */
			}
		}
	}

	return 1;
	/* SE A MATRIZ VERIFY FOR IGUAL RETORNA 1 E ISSO SIGNIFICA QUE
		NÃO HÁ MAIS MOVIMENTOS POSSÍVEIS */



}

int verificar_se_pode_preencher (int matriz[4][4]){
/* Essa função limita a adição de numero aleatório
Por exemplo, se o usuario mover para o mesmo lado mais deu uma vez
sem essa função, o jogo iria adicionar numeros aleatórios 2 ou 4 todas
as vezes. Com a função, o jogo adiciona apenas 1 vez. */
					int matrizverificar[4][4] = {0};
					int i,j;

					ler_arquivo_volta(matrizverificar);
					/* RECEBE A MATRIZ DA JOGADA ANTERIOR */

					for (i=0; i < 4; ++i){
						for (j=0; j < 4; ++j){
							if (matrizverificar[i][j] != matriz[i][j]){
								return 0;
								/* RETURN 0 SE FOR DIFERENTE */
							}
						}
					}
					return 1;
					/* TUDO IGUAL */
}

void subir_mat(int matriz[4][4]){
				int i,j;
				gerar_arquivo_volta(matriz);
				/* GERA O ARQUIVO PARA QUE O USUARIO
					POSSA VOLTAR PARA O MOV. ANTERIOR. */
				moveUP(matriz);
				/* FAZ OS MOVIMENTOS PARA SUBIR A MATRIZ */
				if (verificar_se_pode_preencher(matriz) == 0 && venceu == 0){
					preenche_mat(matriz);
					imprime_mat(matriz);
					/* Se após o movimento a matriz for diferente da
					anterior, então é para adicionar um novo elemento aleatorio
					na matriz */
				}
				else {
				imprime_mat(matriz);
				/* Se após movimento a matriz for igual, então não é para
				adicionar elemento aleatório na matriz */
				}

				/* PREENCHE A MATRIZ COM UM ELEMENTO ALEATÓRIO ENTRE 2 e 4 */
				imprime_mat(matriz);
				/* IMPRIME A MATRIZ NA TELA DO USUÁRIO */
				if(CasasVazias(matriz) == 0 && verificar_estado(matriz) == 1){
					imprime_mat(matriz);
					gameover = 1;
				}
}

void descer_mat(int matriz[4][4]) {
				gerar_arquivo_volta(matriz); /* GERA O ARQUIVO PARA QUE O USUARIO
					POSSA VOLTAR PARA O MOV. ANTERIOR. */
				girar_mat(matriz);
				girar_mat(matriz);
				moveUP(matriz);
				girar_mat(matriz);
				girar_mat(matriz);
				/* FAZ OS MOVIMENTOS PARA DESCER OS ELEMENTOS DA MATRIZ */
				if (verificar_se_pode_preencher(matriz) == 0 && venceu == 0){
					preenche_mat(matriz);
					imprime_mat(matriz);
					/* Se após o movimento a matriz for diferente da
					anterior, então é para adicionar um novo elemento aleatorio
					na matriz */
				}
				else {
				imprime_mat(matriz);
				/* Se após movimento a matriz for igual, então não é para
				adicionar elemento aleatório na matriz */
				}
				if(CasasVazias(matriz) == 0 && verificar_estado(matriz) == 1){
					imprime_mat(matriz);
					gameover = 1;
				}
}

void esquerda_mat(int matriz[4][4]){
				gerar_arquivo_volta(matriz);
				/* GERA O ARQUIVO PARA QUE O USUARIO
					POSSA VOLTAR PARA O MOV. ANTERIOR. */
				girar_mat(matriz);
				girar_mat(matriz);
				girar_mat(matriz);
				moveUP(matriz);
				girar_mat(matriz);
				if (verificar_se_pode_preencher(matriz) == 0 && venceu == 0){
					preenche_mat(matriz);
					imprime_mat(matriz);
					/* Se após o movimento a matriz for diferente da
					anterior, então é para adicionar um novo elemento aleatorio
					na matriz */
				}
				else {
				imprime_mat(matriz);
				/* Se após movimento a matriz for igual, então não é para
				adicionar elemento aleatório na matriz */
				}
				/* IMPRIME A MATRIZ NA TELA DO USUÁRIO */
				if(CasasVazias(matriz) == 0 && verificar_estado(matriz) == 1){
					imprime_mat(matriz);
					gameover = 1;
				}
}

void direita_mat(int matriz[4][4]){
				gerar_arquivo_volta(matriz);
				/* GERA O ARQUIVO PARA QUE O USUARIO
					POSSA VOLTAR PARA O MOV. ANTERIOR. */
				girar_mat(matriz);
				moveUP(matriz);
				girar_mat(matriz);
				girar_mat(matriz);
				girar_mat(matriz);
				/* FAZ OS MOVIMENTOS PARA DESCER OS ELEMENTOS DA MATRIZ */
				if (verificar_se_pode_preencher(matriz) == 0 && venceu == 0){
					preenche_mat(matriz);
					imprime_mat(matriz);
					/* Se após o movimento a matriz for diferente da
					anterior, então é para adicionar um novo elemento aleatorio
					na matriz */
				}
				else {
				imprime_mat(matriz);
				/* Se após movimento a matriz for igual, então não é para
				adicionar elemento aleatório na matriz */
				}
				if(CasasVazias(matriz) == 0 && verificar_estado(matriz) == 1){
					imprime_mat(matriz);
					gameover = 1;
				}
}


void zerar_mat(int matriz[4][4]){
	/* ESTA FUNÇÃO ZERA A MATRIZ, É UTILIZADA PARA
		QUANDO O USUÁRIO DESEJA REINICIAR A JOGADA */
	int i,j;
	for (i=0; i < 4; ++i){
		for (j=0; j < 4; ++j){
			matriz[i][j] = 0;
		}
	}
}

void comandar_mat(int matriz[4][4]){
	/* ESSA FUNÇÃO RECEBE OS COMANDOS DE CONTROLE
		DO USUÁRIO, EX: W,D,A,S,R,V */

	char dir; /* direção p movimentar matriz */
	char certeza; 

while(gameover == 0 && venceu == 0){
	 		initscr(); /* INICIA NCURSES */
	 		move (1,35); /* MOVE CURSOR PARA POS:1,35 DO TERMINAL */
			dir = getch(); /* RECEBE COMANDO */

			if (dir == 'q'){
				endwin(); /* SE FOR 'Q' SAI DO JOGO*/
				break;
			}

			if (dir == 'w' || dir == 65){
				/* SE DIGITAR 'W' - SUBIR MATRIZ */
				subir_mat(matriz);
			}
			else if (dir == 's' || dir == 66){
				/* SE DIGITAR 'S' - SUBIR MATRIZ */
				descer_mat(matriz);
			}
			else if (dir == 'a' || dir == 68){
				/* SE DIGITAR 'A' - SUBIR MATRIZ */
				esquerda_mat(matriz);
			}
			else if (dir == 'd'|| dir == 67){
				/* SE DIGITAR 'D' - SUBIR MATRIZ */
				direita_mat(matriz);
			}
			else if (dir == 'v'){
				/* SE DIGITAR 'V' - VOLTAR JOGADA */
				ler_arquivo_volta(matriz);
				/* LER O ARQUIVO COM A MATRIZ DA ULTIMA JOGADA */
				//system("clear");
				/* LIMPA A TELA */
				imprime_mat(matriz);
				/* IMPRIME A MATRIZ */
				comandar_mat(matriz);
				/* CHAMA FUNÇÃO DE CONTROLE DA MATRIZ */
			}
			else if (dir == 'r'){
				/* SE DIGITAR 'R' - RESETAR O JOGO */
				start_color(); /* inicia cores */
				init_pair(18,COLOR_RED,COLOR_BLACK);
				attron(COLOR_PAIR(18));
				mvprintw(18,19,"        RESETAR O JOGO S/N ?       ");		
				attroff(COLOR_PAIR(18));
				/* PERGUNTA SE O USUARIO TEM CERTEZA */
				certeza = getch();
				/* SE USUARIO ESCOLHER SIM OU NÃO */
				switch(certeza){
					case 's':
					case 'S':{
					/* SE DIGITAR 'S' */
					zerar_mat(matriz);
					/* ZERA TODOS ELEMENTOS DA MATRIZ */
					preenche_mat(matriz);
					preenche_mat(matriz);
					/* PREENCHE COM DOIS VALORES ALEATORIOS 2 ou 4*/
					scoreglobal = 0;
					imprime_mat(matriz);
					/* IMPRIME A MATRIZ */
					comandar_mat(matriz);
					/* CHAMA A FUNÇÃO DE CONTROLE DA MATRIZ */

				}
					case 'n':
					case 'N':{
					/* SE DIGITAR 'N' */
					/* LIMPA A TELA */
					imprime_mat(matriz);
					/* IMPRIME NOVAMENTE A MATRIZ */
					comandar_mat(matriz);
					/* CHAMA A FUNÇÃO DE CONTROLE DA MATRIZ */
					}
				}

			}


}

if (gameover == 1){
	/* SE FLAG GAMEOVER FOR ATIVADO, FIM DE JOGO É ATIVADO */
	initscr(); /* INICIA NCURSES */
	start_color(); /*INICIA CORES DO NCURSES */
	imprime_mat(matriz); /* IMPRIME A MATRIZ */
	init_pair(18,COLOR_RED,COLOR_BLACK); /* DECLARA COR */
	attron(COLOR_PAIR(18)); /* INICIALIZA A COR */
	mvprintw(18,18,"              GAME OVER              ");
	attroff(COLOR_PAIR(18)); /* FINALIZA A COR */
	getch();
	getch();
	getch();
	endwin();
}

if (venceu == 1){
	/* SE FLAG GAMEOVER FOR ATIVADO, FIM DE JOGO É ATIVADO */
	initscr(); /* INICIA NCURSES */
	start_color(); /*INICIA CORES DO NCURSES */
	imprime_mat(matriz); /* IMPRIME A MATRIZ */
	init_pair(1,COLOR_YELLOW,COLOR_BLACK); /* DECLARA COR */
	attron(COLOR_PAIR(1)); /* INICIALIZA A COR */
	mvprintw(18,19,"        VOCE VENCEU ! PARABENS !       ");
	attroff(COLOR_PAIR(1)); /* FINALIZA A COR */
	getch();
	getch();
	getch();
	getch();
	getch();
	endwin();
}

}
