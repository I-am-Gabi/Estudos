//ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940
#include "06alunos.h"

int main (void){
	lista<string> alunos;    
	inicializa(alunos);

	lista40nomes(alunos);

	listar(alunos);
	exibe(alunos,2,'d');
	exibe(alunos,2,'i');

	return 0;
}

