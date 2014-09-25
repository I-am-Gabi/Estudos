//ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940
#ifndef _06AVIAO_
#define _06AVIAO_

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
    int size;  
};

struct aviao {
    string nome;
    string origem;
    string destino;
    string modelo;
    string ID;
};

template <class T>
void imprime_lista_espera(const lista<T> &l){
    node<T>* p; 
    cout << "***** Voos em espera *****" << endl;
    for (p = l.begin; p != NULL; p = p->next){
        cout << "(" << (p->data->ID) << "):";
        cout << (p->data->nome) << "-(";
        cout << (p->data->origem) << "->";
        cout << (p->data->destino) << ") ";
        cout << "[" << (p->data->modelo) << "] \n";

    }
    cout << endl;
}

template <class T>
void avioes_em_espera(const lista<T> &l){
    cout << endl;
    cout << "***** Avioes para decolar *****" << endl;
    cout << l.size << " Aviões \n" << endl;
}

template <class T>
void caracteristicas_primeiro_fila(const node<T> *av){

        cout << "***** Primeiro da Fila *****" << endl;
        cout << "(" << (av->data->ID) << "):";
        cout << (av->data->nome) << "-(";
        cout << (av->data->origem) << "->";
        cout << (av->data->destino) << ") ";
        cout << "[" << (av->data->modelo) << "] \n" << endl;

}

template<class T>
void adiciona_aviao(lista<T> &list,T* num){
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

    list.size++;

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
void libera_voo(lista<T> &list){
    if (list.begin != NULL){
    node<T> * aux;
    aux = list.begin->next;
        cout << "***** Voo Autorizado *****" << endl;
        cout << "(" << ((list.begin)->data->ID) << "):";
        cout << ((list.begin)->data->nome) << "-(";
        cout << ((list.begin)->data->origem) << "->";
        cout << ((list.begin)->data->destino) << ") ";
        cout << "[" << ((list.begin)->data->modelo) << "] \n";
        cout << endl;
    delete(list.begin);
    list.begin = aux;
    }
}

aviao* add_aviao(string name,string origin,string destiny, string id, string model);

#endif
