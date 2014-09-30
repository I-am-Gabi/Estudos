#include <iostream>
#include <string>
#include "fila.h"

using std::cout;
using std::endl;

void inicializa(Fila *fila) {
	fila->topo = NULL;
	fila->fim = NULL;
	fila->tamanho = 0;
}

bool vazia(Fila *fila) {
	return (fila->topo == NULL);
}

int enfilera(Fila *fila, string x) {
	No *aux = new No;
	aux->caracter = x; 
	if (fila->topo == NULL) {
		fila->topo = aux;
		fila->fim = aux;
		fila->tamanho++;
		return 0;
	} 
	No *a = new No;
	a = fila->fim;
	fila->fim->prox = aux;
	aux->ant = a;
	fila->fim = aux;
	fila->tamanho++;
}

string desinfilera(Fila *fila) {
	string i = "";  
	if(vazia(fila)) {
		cout << "Fila vazia" << endl; return 0;
	}

	No *no = new No; 
	no = fila->topo;
	fila->topo = no->prox;
	i = no->caracter;
	delete(no);
	fila->tamanho--; 
	return i;
}

void imprime(Fila *fila) {
	No *p = fila->topo;
	cout << "Fila : ";
	for (; p != NULL; p = p->prox)
	{
		cout << p->caracter << " | ";
	}
	cout << endl;
}

void imprime_contraria(Fila *fila) {
	No *p = fila->fim;
	cout << "Fila : ";
	for (; p != NULL; p = p->ant)
	{
		cout << p->caracter << " | ";
	}
	cout << endl;
}

bool verificar(Fila *fila, int tamanho) {
	No *p = fila->topo; 
	int cont_p, cont_c;
	cont_p = cont_c = 0; 
	for (int i = 0; p != NULL; p = p->prox, i++)
	{
		if(p->caracter.compare("{") == 0) {
			if(p->prox->caracter.compare(")") == 0)
				return false;
			else if(p->prox->caracter.compare("(") == 0)
				cont_p++;
			else if(p->prox->caracter.compare("{") == 0)
				cont_c++;
			else if(p->prox->caracter.compare("}") == 0)
				p = p->prox;
		}
		else if(p->caracter.compare("(") == 0) {
			if(p->prox->caracter.compare("}") == 0)
				return false;
			else if(p->prox->caracter.compare("(") == 0)
				cont_p++;
			else if(p->prox->caracter.compare("{") == 0)
				cont_c++;
			else if(p->prox->caracter.compare(")") == 0)
				p = p->prox;
		}
		else if(p->caracter.compare("}") == 0) {
			if(i == 0) return false;
			else if(p->ant->caracter.compare("}") == 0)
				cont_c--;
			else if(p->prox->caracter.compare(")") == 0)
				cont_p--;
		}
	}

	if ((cont_p == 0) && (cont_c == 0))
		return true;

	cout << endl;
}