//ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940

#include "01pilha.h"

int* newreal(int num){
	/* Esta função aloca dinamicamente um int e retorna
	o endereço de memória alocado */
	int * newint = new int;
	(*newint) = num;
	return newint;
}

void imprime (Lista* l){
	/* Esta função percorre a lista e imprime os elementos */
 	Lista* p; 
	cout << "= ";
	for (p = l; p != NULL; p = p->next){
		cout << *(p->data) << " ";
	}
	cout << endl;
}