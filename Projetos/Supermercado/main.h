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
class list{

/* Functions to the class list:

    pushfront() - to add at the top;
    pushback() - to add at the end ;
    popfront() - to remove at the top;
    popback() - to remove at the end;
    size() - returns the size of list;
    cout() - to print all elements of list;
    search( element ) - returns a pointer to node of the element;
    showpos( position ) - returns the element in the position;

*/
private:
	node<T>* begin;
	node<T>* end;
	int sizeoflist;
public:
	list(){ begin = NULL; end = NULL; sizeoflist = 0;}
    int size() {return sizeoflist;}
public:
	void pushfront(T* element){
    	node<T> * newnode = new node<T>;
    	newnode->data = element;
    	newnode->next = begin;
    	begin = newnode;
    	if (end == NULL){
        	end = newnode;
    	}
    	sizeoflist += 1;
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
    	sizeoflist += 1;
	}
	void popfront(){
    	if (begin != NULL){
        	node<T> * aux;
        	aux = begin->next;
        	delete(begin);
        	begin = aux;
        	sizeoflist -= 1;	
    	}
	}
	void popback(){
    	if (end != NULL){
        	node<T> * aux;
        	aux = begin;
        	while (aux->next != NULL && aux->next != end){
           		aux = aux->next;
        	}
        	if (aux != end){
        		delete(end);
        		aux->next = NULL;
        		end = aux;
        		sizeoflist -= 1;
        	}
        	else {
        		delete(end);
        		begin = NULL;
        		end = NULL;
        		sizeoflist = 0;
        	}
    	}
	}
    T showpos(int pos){
        node<T> * p = begin;
        int i = 0;
        pos = pos % sizeoflist; /* Evita que o valor seja maior que a lista */
        if (begin != NULL && pos < sizeoflist){
            while (p != NULL && i < pos){
                ++i;
                p = p->next;
            }
        return *(p->data); /* Retorna endereço do conteúdo da posição */
        }

        else {return -1;} /* Retorna nulo */
    }
   node <T>* search(T element){
        node<T> * p;
        if (begin != NULL){
            for (p = begin; p != NULL; p = p->next){
                if (*(p->data) == element){ return p; }
            }
        }
        return NULL;
    } 

	void cout(){
 		node<T>* p; 
		std::cout << "= [" << sizeoflist << "] ";
		if (begin != NULL){
			for (p = begin; p != NULL; p = p->next){
				std::cout << *(p->data) << " ";
			}
		}
		std::cout << endl;
	}

};

#endif