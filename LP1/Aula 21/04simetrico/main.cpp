//ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940
#include "04simetrico.h"

int main (void){
	lista<string> l1; inicializa(l1);
	lista<string> l2; inicializa(l2);

	insere::Fim(l1,new string ("A"));
	insere::Fim(l1,new string ("B"));
	insere::Fim(l1,new string ("A"));

	insere::Fim(l1,new string ("A"));
	insere::Fim(l1,new string ("B"));
	insere::Fim(l1,new string ("A"));

	listar(l1);

	if (ehSimetrico(l1)){cout << "simetrico" << endl;}
	else { cout << "não simétrico" << endl;}

	insere::Fim(l2,new string ("A"));
	insere::Fim(l2,new string ("B"));
	insere::Fim(l2,new string ("C"));

	insere::Fim(l2,new string ("X"));
	insere::Fim(l2,new string ("Y"));
	insere::Fim(l2,new string ("A"));

	listar(l2);

	if (ehSimetrico(l2)){cout << "simetrico" << endl;}
	else { cout << "não simétrico" << endl;}



	return 0;
}

