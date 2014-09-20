//ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940

#include <iostream>
using std::cout;
using std::endl;

struct lista {
	int data;
	struct lista* next;
}; 

typedef struct lista Lista;

Lista* inicializa(void){return NULL;};
Lista* insere(Lista* l, int i){
	Lista* novo = new Lista;
	novo->data = i;
	novo->next = l;
	return novo;
}

int soma(Lista* l){
	Lista* p;
	int somalist=0;
		for (p = l; p != NULL; p = p->next)
			somalist += p->data;
	return somalist;
}


int main(){
	Lista * l;
	l = inicializa();
	l = insere(l,23);
	l = insere(l,45);
	std::cout << soma(l) << std::endl;
	return 0;
}