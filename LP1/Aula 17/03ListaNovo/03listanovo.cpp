//ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940

#include "03listanovo.h"

Realtype* newreal(int left, int right){
	/* Esta função aloca dinamicamente um realtype e retorna
	o endereço de memória alocado */
	Realtype * newreal = new Realtype;
	newreal->left = left;
	newreal->right = right;
	return newreal;
}

bool verifica_real(Realtype * R1, Realtype * R2){
	/* Esta função verifica se os dois realtypes são iguais ou
	diferentes */
	if(R1->right == R2->right && R1->left == R2->right){return true;}
	return false;
}

void imprime (Lista* l){
	/* Esta função percorre a lista e imprime os elementos */
 	Lista* p; 
	cout << "= ";
	for (p = l; p != NULL; p = p->next){
		cout << p->data->left << "." << p->data->right << " ";
	}
	cout << endl;
}