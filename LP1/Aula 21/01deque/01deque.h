//ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940
#ifndef _01DEQUE_
#define _01DEQUE_

#include <iostream>
using std::cout;
using std::endl;
using std::string;

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

namespace insere{

template <class T>
void Inicio(lista<T> &list,T* element){
    node<T> * newnode = new node<T>;
    newnode->data = element;
    newnode->next = list.begin;
    list.begin = newnode;
    if (list.end == NULL){
        list.end = newnode;
    }
}

template<class T>
void Fim(lista<T> &list,T* num){
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

}

namespace retira {

template <class T>
void Inicio(lista<T> &list){
    if (list.begin != NULL){
        node<T> * aux;
        aux = list.begin->next;
        delete(list.begin);
        list.begin = aux;
    }
}

template <class T>
void Fim(lista<T> &list){
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

template<class T>
void Todos(lista<T> &l){
    node<T> * aux;
    for (aux = l.begin; aux != NULL; aux = aux->next){
        retira::Fim(l);
    }
}

}

template <class T>
void listar(const lista<T> &l){
 	node<T>* p; 
	cout << "= ";
	for (p = l.begin; p != NULL; p = p->next){
		cout << *(p->data) << " ";
	}
	cout << endl;
}




#endif
