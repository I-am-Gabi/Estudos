//ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940
#include "07gif.h"

int main (void){
	lista<int*> maingif;    
	inicializa(maingif);
	insere::Fim(maingif,inicializa_mat());
	gera_gif(maingif,5);	
	listar(maingif);

	return 0;
}

