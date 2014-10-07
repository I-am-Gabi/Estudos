//ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940
#include "05jogada.h"

int main (void){
	lista<NAIPE> jogo; inicializa(jogo);
	lista<NAIPE> jogador; inicializa(jogador);
		cout << endl;
	gera_deque(jogo,5);
	listar(jogo,"<<DEQUE"); 
	gera_deque(jogador,3);
	listar(jogador,"<<JOGADOR");

	cout << endl;
	cout << "Primeira Carta: "; imprime_naipe(*(jogador.begin->data)); 
	cout << " do jogador";
	cout << " retirada e inserida no fim do deque " << endl;
	cout << endl;
	insere::Fim(jogo,(jogador.begin->data));
	retira::Inicio(jogador);
	listar(jogo,"<<DEQUE"); 
	listar(jogador,"<<JOGADOR");

	insere::Inicio(jogador,(jogo.end->data));
	retira::Fim(jogo);
	cout << endl;
	cout << "Ultima Carta: "; imprime_naipe(*(jogo.end->data)); 
	cout << "do deque ";
	cout << " retirada e inserida no final do jogador " << endl;
	cout << endl;
	listar(jogo,"<<DEQUE"); 
	listar(jogador,"<<JOGADOR");
	cout << endl;
	


	return 0;
}

