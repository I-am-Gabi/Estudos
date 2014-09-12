//ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940

#include <iostream>
#include "ponto.h"

using std::cout; using std::endl;

int main (){

Ponto ponto1;
	ponto1.x =0; ponto1.y = 0;

Ponto ponto2;
	ponto2.x =10; ponto2.y = 5;

	imprimir(ponto1);
	imprimir(ponto2);

cout << "Dist ponto 1 e 2: " << 
	geometria::dist_pt(ponto1,ponto2) << endl;

cout << "Dist ponto 1 e 2: " <<
	plano::dist_pt(ponto1,ponto2) << endl;
}

