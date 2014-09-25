//ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940

#include "01pilha.h"

int main (void){

	Lista* l = NULL;
	l = insere(l,newreal(3));
	l = insere(l,newreal(6));
	l = insere(l,newreal(9));
	imprime(l);

	l = remove(l,l->data);
	l = remove(l,l->data);
	l = remove(l,l->data);

}

