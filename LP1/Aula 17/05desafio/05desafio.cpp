//ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940

#include "05desafio.h"

Lista* meio(Lista* l){
	Lista * i;
	Lista * j;
	j = l;
	for (i = l; (i->next)->next != NULL; i = (i->next)->next){
		j = j->next;	
	}
	return j;
	
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
		cout << "ANO = " << p->data->ano << endl;
		cout << endl;

	}
}

void imprime_node(Lista * l){
		cout << endl;
		cout << ": : -- MAIS PROXIMO DO MEIO -- : :" << endl;
		cout << "TITULO = " << l->data->titulo << " " << endl;
		cout << "AUTOR = " << l->data->autor << " " << endl;		 
		cout << "GENERO = " << l->data->genero << " " << endl;
		cout << "ANO = " << l->data->ano << endl;
		cout << endl;
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



