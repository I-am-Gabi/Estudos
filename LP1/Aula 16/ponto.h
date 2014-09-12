//ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940

#ifndef _PONTOh_
#define _PONTOh_

typedef struct {
	int x;
	int y;
} Ponto;

namespace geometria{
	int dist_pt(const Ponto& ponto1, const Ponto &ponto2);
}

namespace plano{
	int dist_pt(const Ponto& ponto1, const Ponto &ponto2);
}

void imprimir (const Ponto &ponto);

#endif