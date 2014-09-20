//ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940

#include "01listaencadeada.h"

int main(){
	Lista * l;
	l = inicializa();
	l = insere(l,23);
	l = insere(l,45);
	std::cout << soma(l) << std::endl;
	return 0;
}