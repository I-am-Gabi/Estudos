#ifndef _LISTALIB_
#define _LISTALIB_

#include <iostream>
using std::endl;

template <class T>
struct node {
	node<T> * next;
	T* data;
}; 
template <class T>
struct lista {
    struct node<T>* begin;
    struct node<T>* end;   
};

namespace list{

template<class T>
void inicializa(lista<T> &l){
    l.begin = NULL;
    l.end = NULL;
}

template<class T>
void push_back(lista<T> &list,T* num){
    node<T>* newnode = new node<T>;
    newnode->data = num;
    newnode->next = NULL;
    
    if (list.begin == NULL){
        list.begin = newnode; 
        list.end = newnode;  
    }
    else {
        (list.end->next) = newnode;
        list.end = list.end->next;
    }

}
template <class T>
void push_front(lista<T> &list,T* element){
    node<T> * newnode = new node<T>;
    newnode->data = element;
    newnode->next = list.begin;
    list.begin = newnode;
    if (list.end == NULL){
        list.end = newnode;
    }
}

template <class T>
void pop_front(lista<T> &list){
    if (list.begin != NULL){
    node<T> * aux;
    aux = list.begin->next;
    delete(list.begin);
    list.begin = aux;
    }
}

template <class T>
void pop_back(lista<T> &list){
    if (list.end != NULL){
        node<T> * aux;
        aux = list.begin;
        while (aux->next != NULL && aux->next != list.end){
            aux = aux->next;
        }
        delete(list.end);
        list.end = aux;
        list.end->next = NULL;


    }
}

template <class T>
void cout(const lista<T> &l){
 	node<T>* p; 
	std::cout << "= ";
	for (p = l.begin; p != NULL; p = p->next){
		std::cout << *(p->data) << " ";
	}
	std::cout << endl;
}

}

#endif
