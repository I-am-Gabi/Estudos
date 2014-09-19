//ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940

#include "03listanovo.h"

int main (void){

	Lista* l = NULL;
	l = insere(l,newreal(3,987));
	l = insere(l,newreal(6,345));
	l = insere(l,newreal(9,123));
	imprime(l);

	l = remove(l,l->data);
	l = remove(l,l->data);
	l = remove(l,l->data);

}

