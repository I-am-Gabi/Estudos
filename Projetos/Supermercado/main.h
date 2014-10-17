#ifndef _LISTA_GENERICA_
#define _LISTA_GENERICA_

#include <iostream>
using std::cout;
using std::endl;
template <class T>
struct node {
	node<T> * next;
	T* data;
}; 

template <class T>
class lista {
private:
	node<T>* begin;
	node<T>* end;
public:
	lista(){ begin = NULL; end = NULL;}
public:
	void pushfront(T* element){
    	node<T> * newnode = new node<T>;
    	newnode->data = element;
    	newnode->next = begin;
    	begin = newnode;
    	if (end == NULL){
        	end = newnode;
    	}
	}
	void pushback(T* num){
    	node<T>* newnode = new node<T>;
    	newnode->data = num;
   		newnode->next = NULL;
    
  	 	if (begin == NULL){
        	begin = newnode; 
        	end = newnode;  
    	}
    	else {
        	(end->next) = newnode;
        	end = end->next;
    	}
	}
	void popfront(){
    	if (begin != NULL){
        	node<T> * aux;
        	aux = begin->next;
        	delete(begin);
        	begin = aux;
    	}
	}
	void popback(){
    	if (end != NULL){
        	node<T> * aux;
        	aux = begin;
        	while (aux->next != NULL && aux->next != end){
           		aux = aux->next;
        	}
        delete(end);
        end = aux;
        end->next = NULL;
    	}
	}
	void listar(){
 	node<T>* p; 
	cout << "= ";
		for (p = begin; p != NULL; p = p->next){
			cout << *(p->data) << " ";
		}
	cout << endl;
	}

};

#endif