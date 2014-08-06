#ifndef _AlunoLIB_
#define _AlunoLIB_

using namespace std;

 typedef struct aluno {
    string nome;
	int num;
 } Aluno;

int buscaAluno (Aluno *v, int start, int end, int valor);

 #endif