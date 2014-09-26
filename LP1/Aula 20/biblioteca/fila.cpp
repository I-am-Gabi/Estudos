#include <iostream>
#include "fila.h"

using std::cout;
using std::endl;

void DYNAMIC_MODE  inicializa(Fila *fila) {
	fila->topo = NULL;
	fila->fim = NULL;
	fila->tamanho = 0;
}

bool DYNAMIC_MODE vazia(Fila *fila) {
	return (fila->topo == NULL);
}

int DYNAMIC_MODE enfilera(Fila *fila, int x) {
	No *aux = new No;
	aux->valor = x; 
	if (fila->topo == NULL) {
		fila->topo = aux;
		fila->fim = aux;
		fila->tamanho++;
		return 0;
	} 

	fila->fim->prox = aux;
	fila->fim = aux;
	fila->tamanho++;
}

int DYNAMIC_MODE desinfilera(Fila *fila) {
	int i = 0;  
	if(vazia(fila)) {
		cout << "Fila vazia" << endl; return 0;
	}

	No *no = new No; 
	no = fila->topo;
	fila->topo = no->prox;
	i = no->valor;
	delete(no);
	fila->tamanho--; 
	return i;
}

void DYNAMIC_MODE imprime(Fila *fila) {
	No *p = fila->topo;
	cout << "Fila : ";
	for (; p != NULL; p = p->prox)
	{
		cout << p->valor << " | ";
	}
	cout << endl;
}
