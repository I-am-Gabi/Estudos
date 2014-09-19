#ifndef _03LISTANOVO_
#define _03LISTANOVO_

#include <iostream>
#include <math.h>
#include <stdlib.h>
using std::cout;
using std::endl;

typedef struct {
	int left;
	int right;
} Realtype;

struct node {
	struct node* next;
	Realtype* data;
}; 

typedef struct node Lista;
	
bool verifica_real(Realtype * R1, Realtype * R2);

template<class T,class U>
T* insere(T* list, U* floatint){
	/* Recebe ponteiro de uma lista pre-existente "list"
	e um ponteiro de um realtype e aloca dinamicamente
	um novo nó (node) na lista */
	imprime(list);
	T* newnode = new T;
	newnode->data = floatint;
	newnode->next = list; 
	cout << "Allocated " << newnode->data->left << "." << newnode->data->right
	<< " at " << newnode << endl;
	return newnode;
}

template<class T,class U>
T* remove(T* list, U* floatint){
	/* Recebe uma lista e um realtype,
	percorre a lista procurando o elemento
	e remove se encontrado */
	Lista* ant = NULL;
	Lista* atual = list;

	while (atual != NULL && !(verifica_real)){
		ant = atual;
		atual = atual->next;
	}
	if (atual == NULL) { return list; }
	if (ant == NULL) { list = atual->next; }
	else { ant->next = atual->next;}

	cout << "Removing now " << atual->data->left << "." << atual->data->right << " at " << atual << endl;
	delete(atual);
	imprime(list);
	return list;
}



Realtype* newreal(int left, int right);

void imprime (Lista* l);

#endif