//ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940

#include "04livros.h"

int main (void){

	Lista* l = NULL;
	l = insere(l,livro_cria("livro1","autor1","genero1",10));
	l = insere(l,livro_cria("livro2","autor2","genero2",45));
	l = insere(l,livro_cria("livro3","autor3","genero3",30));
	l = insere(l,livro_cria("livro4","autor4","genero4",5));
	imprime(l);

	ordenar_ano(l);
	imprime(l);

}

