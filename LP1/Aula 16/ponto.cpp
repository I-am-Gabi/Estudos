//ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940

#include <iostream>
#include <cmath>
#include "ponto.h"

using std::cout; using std::endl;

namespace geometria{
	int dist_pt(const Ponto& ponto1, const Ponto &ponto2){
		return sqrt( pow(ponto1.x - ponto2.x, 2)) +
					 pow(ponto1.y - ponto2.y,2  );
	}
}

namespace plano{
	int dist_pt(const Ponto& ponto1, const Ponto &ponto2){
		return sqrt( pow(ponto1.x - ponto2.x, 2)) +
					 pow(ponto1.y - ponto2.y,2);
	}
}


void imprimir (const Ponto &ponto){
	cout << ponto.x << ", " << ponto.y << endl;
}
