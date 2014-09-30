#include "listlib.h"

namespace lsb{

	void setl(list &l){
		l.begin = NULL;
		l.end = NULL;
	}
	void pushb(list &l,int* toadd){
		node * newnode = new node;
		newnode->data = toadd;
		newnode->next = NULL;
		if (l.begin != NULL){
			l.end->next = newnode;
			l.end = l.end->next;
		}
		else {
			l.begin = newnode;
			l.end = newnode;
		}
	}
	void popb(list &l){
		if (l.begin != NULL){
			node * aux = l.begin;
			while (aux->next != NULL && aux->next != l.end){aux = aux->next;}
			delete(l.end);
			l.end = aux;
			l.end->next = NULL;
		}
	}
	void pushf(list &l, int* toadd){
		node * newnode = new node;
		newnode->data = toadd;
		newnode->next = l.begin;

		if (l.begin != NULL){
			l.begin = newnode;
		}
		else {
			l.begin = newnode;
			l.end = newnode;
		}
	}
	void popf(list &l){
		if (l.begin != NULL){
			node * aux = l.begin;
			delete(l.begin);
			l.begin = aux->next;
		}
	}
	void printl(const list &l){
		node * aux;
		for (aux = l.begin; aux != NULL; aux = aux->next){
			std::cout << *(aux->data) << " ";
		}
		std::cout << std::endl;
	}

}