//ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940
#include "02matriz.h"

int main (void){

	matrizcl mat(4,4);
	mat.cria(); 
		mat.imprime();	
		mat.atribui(3,2,85);
		mat.imprime();
	mat.matdelete();
	mat.imprime();

}

