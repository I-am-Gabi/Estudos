//ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940

#include "04livros.h"

Livro* livro_cria(string title, string author, string kind, int year){
	Livro * newbook = new Livro;
	newbook->titulo = title;
	newbook->autor = author;
	newbook->genero = kind;
	newbook->ano = year;
	return newbook;
}

int livro_verificaNoModernismo(Livro * l){
	if (l->ano < 1930) {return -1;}
	else if (l->ano >= 1930 && l->ano <= 1945) {return 0;}
	else if (l->ano > 1945) {return 1;}
}

void imprime (Lista* l){
	/* Esta função percorre a lista e imprime os elementos */
 	Lista* p; 
	cout << endl;
	for (p = l; p != NULL; p = p->next){
		cout << "TITULO = " << p->data->titulo << " " << endl;
		cout << "AUTOR = " << p->data->autor << " " << endl;		 
		cout << "GENERO = " << p->data->genero << " " << endl;
		cout << "ANO = " << p->data->ano << " (" << livro_verificaNoModernismo(p->data) << ")" << endl;
		cout << endl;

	}
}

void ordenar_ano(Lista* l){
	cout << endl;
	cout << "++ Ordenando por ANO ++" << endl;
	Lista * i;
	Lista * j;
	Livro * aux;
	for (i = l; i->next != NULL; i = i->next){
		for( j = i->next; j != NULL; j = j->next ){
			if (i->data->ano < j->data->ano){
				aux = i->data;
				i->data = j->data;
				j->data = aux; 
			} 	
		}
	}
}

void ordenar_titulo(Lista* l){
	cout << endl;
	cout << "++ Ordenando por TITULO ++" << endl;
	Lista * i;
	Lista * j;
	Livro * aux;
	for (i = l; i->next != NULL; i = i->next){
		for( j = i->next; j != NULL; j = j->next ){
			if ((i->data->titulo).compare(j->data->titulo) > 0){
				aux = i->data;
				i->data = j->data;
				j->data = aux; 
			} 	
		}
	}
}

