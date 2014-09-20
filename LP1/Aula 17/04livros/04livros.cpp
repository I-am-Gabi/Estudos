//ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940

#include "04livros.h"

void swappt(void *a, void *b){
	void * aux;
	aux = a;
	a = b;
	b = aux;
}

Livro* livro_cria(string title, string author, string kind, int year){
	Livro * newbook = new Livro;
	newbook->titulo = title;
	newbook->autor = author;
	newbook->genero = kind;
	newbook->ano = year;
	return newbook;
}

void imprime (Lista* l){
	/* Esta função percorre a lista e imprime os elementos */
 	Lista* p; 
	cout << endl;
	for (p = l; p != NULL; p = p->next){
		cout << "TITULO = " << p->data->titulo << " " << endl;
		cout << "AUTOR = " << p->data->autor << " " << endl;		 
		cout << "GENERO = " << p->data->genero << " " << endl;
		cout << "ANO = " << p->data->ano << " " << endl;
		cout << endl;
		//cout << p->data->titulo << "." << p->data->autor << " ";
	}
}

void ordenar_ano(Lista* l){
	
	Lista * i;
	Lista * j;
	Livro * aux;
	for (i = l; i->next != NULL; i = i->next){
		for( j = i->next; j != NULL; j = j->next ){
			if (i->data->ano < j->data->ano){
				cout << i->data->ano << " < " << j->data->ano << endl;
				aux = i->data;
				i->data = j->data;
				j->data = aux; 
			} 	
		}
	}


}