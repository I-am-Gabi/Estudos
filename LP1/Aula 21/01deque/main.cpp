//ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940
#include "01deque.h"

int main (void){

	lista<string> l1;
	l1.begin = NULL;
	l1.end = NULL;

	insere::Fim(l1,new string ("D")); 
	insere::Inicio(l1,new string ("A"));
	insere::Inicio(l1,new string ("R"));
	insere::Fim(l1,new string ("A"));
	insere::Fim(l1,new string ("R"));

	listar(l1);
	retira::Inicio(l1);
	retira::Fim(l1);

	listar(l1);
	retira::Todos(l1);

	return 0;
}

