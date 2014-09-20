//ALUNO : ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940

#ifndef _03LISTANOVO_
#define _03LISTANOVO_

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string>
using std::cout;
using std::endl;
using std::string;

typedef struct {
	string titulo;
	string autor;
	string genero;
	int ano;
} Livro;

struct node {
	struct node* next;
	Livro* data;
}; 

typedef struct node Lista;

template<class T,class U>
T* insere(T* list, U* livro){
	/* Recebe ponteiro de uma lista pre-existente "list"
	e um ponteiro de um realtype e aloca dinamicamente
	um novo nó (node) na lista */
	imprime(list);
	T* newnode = new T;
	newnode->data = livro;
	newnode->next = list; 
	cout << "Allocated " << newnode->data->titulo << "." << newnode->data->autor
	<< " at " << newnode << endl;
	return newnode;
}

Livro* livro_cria(string title, string author, string kind, int year);

void imprime (Lista* l);

void ordenar_ano(Lista* l);

void ordenar_titulo(Lista* l);

int livro_verificaNoModernismo(Livro * l);

#endif