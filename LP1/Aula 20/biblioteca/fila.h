#ifndef _FILA_
#define _FILA_
#define DYNAMIC_MODE __attribute__((visibility("default")))

struct No
{
	int valor;
	struct No *prox;
}; 

struct Fila
{
	No *topo;
	No *fim;
	int tamanho;
};

DYNAMIC_MODE void inicializa(Fila *fila);
DYNAMIC_MODE bool vazia(Fila *fila);
DYNAMIC_MODE int enfilera(Fila *fila, int x);
DYNAMIC_MODE int desinfilera(Fila *fila);
DYNAMIC_MODE void imprime(Fila *fila);

#endif