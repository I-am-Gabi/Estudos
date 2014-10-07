//ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940
#ifndef _06ALUNOS_
#define _06ALUNOS_

#include <iostream> /* padrão C++ */
#include <string>
#include <stdlib.h> /* srand e rand */
#include <ctime> /* clock() function */

using std::cout; using std::endl;
using std::string; using std::cin;

template <class T>
struct node {
	node<T> * next;
    node<T> * back;
	T* data;
}; 
template <class T>
struct lista {
    struct node<T>* begin;
    struct node<T>* end;  
    int size; 
};
template <class T>
void inicializa(lista<T> &l1){
    l1.begin = NULL;
    l1.end = NULL;
    l1.size = 0;   
}

void lista40nomes(lista<string> &alunos);

namespace insere{

template <class T>
void Inicio(lista<T> &list,T* element){
    node<T> * newnode = new node<T>;
    newnode->data = element;
    newnode->next = list.begin;
    newnode->back = NULL;
    list.begin = newnode;
    if (list.end == NULL){
        list.end = newnode;
    }
    list.size += 1;
}

template<class T>
void Fim(lista<T> &list,T* num){
    node<T>* newnode = new node<T>;
    newnode->data = num;
    newnode->next = NULL;
    newnode->back = list.end;
    
    if (list.begin == NULL){
        list.begin = newnode; 
        list.end = newnode;  
    }
    else {
        (list.end->next) = newnode;
        list.end = list.end->next;
    }
    list.size += 1;
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
        list.begin->back = NULL;
    }
    list.size -= 1;
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
    list.size -= 1;
}

}

template <class T>
void listar(const lista<T> &l){
    node<T>* p; 
    cout << l.size << " completa >> ";
    for (p = l.begin; p != NULL; p = p->next){
        cout << *(p->data) << " ";
    }
    cout << endl;
}

template<class T>
void exibe(lista<T> &l,int pos, char ordem){

    node<T> * p;
    p = l.begin;
     cout << endl;
    for (int i=0; i < pos && p != NULL; p = p->next,++i);
    if (ordem == 'd'){
        cout << pos << " direta >> ";
        for (; p != NULL; p = p->next){
            cout << *(p->data) << " "; 
        }
    }
    else if (ordem == 'i'){ 
        cout << pos << " inversa >> ";      
        for (; p != NULL; p = p->back){
            cout << *(p->data) << " ";
        }
    }
     cout << endl;

}

#endif
