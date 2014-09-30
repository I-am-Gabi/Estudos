#ifndef _FILA_
#define _FILA_

using std::string;

struct No
{
	string caracter;
	struct No *prox;
	struct No *ant;
}; 

struct Fila
{
	No *topo;
	No *fim;
	int tamanho;
};

void inicializa(Fila *fila);
bool vazia(Fila *fila);
int enfilera(Fila *fila, string x);
string desinfilera(Fila *fila);
void imprime(Fila *fila);
bool verificar(Fila *fila, int tamanho);
void imprime_contraria(Fila *fila);

#endif