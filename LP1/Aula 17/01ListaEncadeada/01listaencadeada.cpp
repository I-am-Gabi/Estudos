//ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940
#include "01listaencadeada.h"

Lista* inicializa(void){return NULL;}

Lista* insere(Lista* l, int i){
	Lista* novo = new Lista;
	novo->data = i;
	novo->next = l;
	return novo;
}

int soma(Lista* l){
	Lista* p; int somalist=0;
	for (p = l; p != NULL; p = p->next) somalist += p->data;
	return somalist;
}