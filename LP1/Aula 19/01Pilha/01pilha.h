#ifndef _01PILHA_
#define _01PILHA_

#include <iostream>
#include <math.h>
#include <stdlib.h>
using std::cout;
using std::endl;

struct node {
	struct node* next;
	int* data;
}; 

typedef struct node Lista;
	
template<class T,class U>
T* insere(T* list, U* num){
	imprime(list);
	T* newnode = new T;
	newnode->data = num;
	newnode->next = list; 
	cout << "Allocated " << *(newnode->data) << " at " << newnode << endl;
	return newnode;
}

template<class T,class U>
T* remove(T* list, U* num){
	Lista* ant = NULL;
	Lista* atual = list;

	while (atual != NULL && *(atual->data) != (*num)){
		ant = atual;
		atual = atual->next;
	}
	cout << "Removing now " << *(atual->data) << " at " << atual << endl;
	if (atual == NULL) { return list; }
	if (ant == NULL) { list = atual->next; }
	else { ant->next = atual->next;}


	delete(atual);
	imprime(list);
	return list;
}


int* newreal(int num);

void imprime (Lista* l);

#endif