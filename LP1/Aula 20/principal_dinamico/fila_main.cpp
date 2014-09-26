/**
 Implementação da TAD Fila com tamanho não pré-definido
 Autora: Gabriela Cavalcante
 Dia: 24/09
 **/

#include <iostream>
#include "fila.h"

using std::cout;
using std::endl;

int main() {
	int i = 0, numero, max = 5;
	Fila *fila = new Fila;

	inicializa(fila);  

	for (i = 0; i < max; ++i)
	{
	 	enfilera(fila, i); 
	 	imprime(fila);
	}

	cout << endl;

	for (i = 0; i < max; ++i)
	{
		numero = desinfilera(fila); 
		imprime(fila);
	}
}