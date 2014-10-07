//ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940
#ifndef _05JOGADA_
#define _05JOGADA_
#include <iostream> /* padrão C++ */
#include <stdlib.h> /* srand e rand */
#include <ctime> /* clock() function */
using std::cout; using std::endl;
using std::string; using std::cin;

enum NAIPE { ouros,espadas,copas,bastos, };

NAIPE* naipe_aleatorio(void);
void imprime_naipe(int op);

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
template <class T>
void inicializa(lista<T> &l1){
    l1.begin = NULL;
    l1.end = NULL;
    l1.size = 0;   
}



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
    list.size += 1;
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
    list.size += 1;
}

}
template <class T>
void gera_deque(lista<T> &l,int quantidade){
    while (quantidade > 0){
            insere::Inicio(l,naipe_aleatorio());
            quantidade--;
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
void listar(const lista<T> &l,string name){
 	node<T>* p; 
	cout << "| ";
	for (p = l.begin; p != NULL; p = p->next){

        switch (*(p->data)){
            case 0:{
                cout << "|ouros|" << " ";
                break;
            }
            case 1:{
                cout << "|espadas|" << " ";
                break;
            }
            case 2:{
                cout << "|copas|" << " ";
                break;
            }
            case 3:{
                cout << "|bastos|" << " ";
                break;
            }            

        }


		//cout << *(p->data) << " ";
	}
    cout << "= " << l.size << " cartas" << " " << name <<endl;
}

#endif
