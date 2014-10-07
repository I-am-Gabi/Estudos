//ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940
#include "05jogada.h"

int main (void){
	lista<NAIPE> jogo; inicializa(jogo);
	lista<NAIPE> jogador; inicializa(jogador);
	cout << endl;
	gera_deque(jogo,5);
	gera_deque(jogador,3);
	listar(jogo,"<<DEQUE"); 
	listar(jogador,"<<JOGADOR");

	/* 
		LOGICA:
		O jogador coloca a carta dele no final do deque;
		E então, o jogador pega a carta do topo do deque para ele;
	*/

	cout << endl;
	cout << "Primeira Carta: "; imprime_naipe(*(jogador.begin->data)); 
	cout << " do jogador";
	cout << " retirada e inserida no fim do deque " << endl;
	cout << endl;
		insere::Fim(jogo,(jogador.begin->data));
		retira::Inicio(jogador);
			listar(jogo,"<<DEQUE"); 
			listar(jogador,"<<JOGADOR");

		insere::Inicio(jogador,(jogo.begin->data));
		retira::Inicio(jogo);
	cout << endl;
	cout << "Carta do topo do deque: "; imprime_naipe(*(jogo.end->data)); 
	cout << "";
	cout << " retirada e inserida no inicio do jogador " << endl;
	cout << endl;
		listar(jogo,"<<DEQUE"); 
		listar(jogador,"<<JOGADOR");
		cout << endl;
	


	return 0;
}

