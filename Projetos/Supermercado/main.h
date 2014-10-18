#ifndef _LISTA_GENERICA_
#define _LISTA_GENERICA_

#include <iostream>
using std::cout;
using std::endl;
using std::string;
template <class T>
struct node {
	node<T> * next;
	T* data;
}; 

struct cliente{
    string nome;
    int saldo;
    int ID;

};

template <class T>
class list{

private:
	node<T>* begin;
	node<T>* end;
    int type;
	int sizeoflist;
private:
    void pushtop(T* toadd){
        node<T> * newnode = new node<T>;
        newnode->data = toadd;
        newnode->next = begin;
        begin = newnode;
        if (end == NULL){
            end = newnode;
        }
        sizeoflist += 1;
    }
    void pushend(T* toadd){
        node<T>* newnode = new node<T>;
        newnode->data = toadd;
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
    void pushpos(T* toadd, int pos){
        node<T> * newnode = new node<T>;
        newnode->data = toadd;
        if (begin != NULL){
            node<T> * p = begin;
            node<T> * ant = begin;
            for (int i=0; i < pos; ++i,ant = p,p=p->next);
            if (ant != p){
                ant->next = newnode;
                newnode->next = p;
            }
            else{
                newnode->next = p;
                begin = newnode;
            }
        }
        else {
            begin = newnode;
            end = newnode;
            sizeoflist = 1;
        }
    }
    void poppos(int pos){
        node<T> * p = begin;
        node<T> * ant = begin;
        for (int i=0; i < pos; ++i,ant = p,p=p->next);
            if (ant != p) { 
                ant->next = p->next;
                delete(p); 
            }
            else { // Se for igual então será o primeiro
                begin = p->next;
                delete(p);
            }
    }
    void poptop(){
        if (begin != NULL){
            node<T> * aux;
            aux = begin->next;
            delete(begin);
            begin = aux;
            sizeoflist -= 1;    
        }
    }
    void popend(){
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
public:
	list(){ begin = NULL; end = NULL; sizeoflist = 0;}
    list(int x) { begin = NULL; end = NULL; sizeoflist = 0; type = x % 4;} 
    int size() {return sizeoflist;}
public:
    void push(T* toadd){
        switch (type) {
            case 1:
                pushend(toadd);
                break;
            case 2:
                pushtop(toadd);
                break;
            default:
                pushend(toadd);
                break;
        }
    }
    bool push(T* toadd, int pos){
        if (pos <= sizeoflist){
            pushpos(toadd,pos);
        }
        else {std::cout << " ERROR: Posição inserção" << pos << " invalida " << std::endl; return false;}
    }
    void pop(){
        switch (type) {
            case 1:
                poptop();
                break;
            case 2:
                popend();
                break;
            default:
                poptop();
                break;
        }
    }
    bool pop(int pos){
        if (pos < sizeoflist){
            poppos(pos);
        }
        else {std::cout << " ERROR: Posição remoção" << pos << " invalida " << std::endl; return false;}
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
    void cout_clientes(){
        node<T>* p; 
        std::cout << "= [" << sizeoflist << "] Clientes" << std::endl;
        if (begin != NULL){
            for (p = begin; p != NULL; p = p->next){
                std::cout << (p->data)->nome << " ";
                std::cout << ((p->data)->ID) << " R$ ";
                std::cout << (p->data)->saldo << ",00 " << std::endl;
            }
        }
        std::cout << endl;
    }

};

class caixa {
private:
    list<cliente>clientes;
public:
    caixa() : clientes(1) {}
    cliente * aux;
    void addcliente(string nome,int ID, int saldo){
        aux = new cliente;
        aux->nome = nome;
        aux->saldo = saldo;
        aux->ID = ID;
        clientes.push(aux);
    }
    void coutcaixa(){ clientes.cout_clientes(); }
};

class supermercado {
private:
    list<caixa>caixas_abertos;
public:
    //supermercado() : caixas_abertos() {}
    void addcaixa(caixa ctoadd){
        caixas_abertos.push(&ctoadd);
    }
    void coutsupermercado(){
       //caixas_abertos.coutcaixa();
    }
};


#endif