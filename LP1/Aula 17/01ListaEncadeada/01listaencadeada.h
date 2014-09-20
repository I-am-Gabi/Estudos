#ifndef _01LISTAENCADEADA_
#define _01LISTAENCADEADA_

#include <iostream>

using std::cout;
using std::endl;

struct lista {
	int data;
	struct lista* next;
}; 

typedef struct lista Lista;

Lista* inicializa(void);
Lista* insere(Lista* l, int i);
int soma(Lista* l);

#endif