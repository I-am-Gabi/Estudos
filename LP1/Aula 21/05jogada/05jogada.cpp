//ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940

#include "05jogada.h"

void imprime_naipe(int op){
	      switch (op){
            case 0:{
                cout << "|ouros|" << " ";
                break;
            }
            case 1:{
                cout << "|espadas|" << " ";
                break;
            }
            case 2:{
                cout << "|copas|" << " ";
                break;
            }
            case 3:{
                cout << "|bastos|" << " ";
                break;
            }            
        }
}

NAIPE* naipe_aleatorio(void){
	int randint;
		srand (clock());
    		randint = ((rand() + clock()) % 4);
    		NAIPE * naipe = new NAIPE;
			*naipe = static_cast<NAIPE>(randint);
    return naipe;
}