#include <iostream>
#include "alunolib.h"

using namespace std;

int buscaAluno (Aluno *v, int start, int end, int valor){
	int mid;
	while (start <= end){
		mid = (start+end)/2;
		if (v[mid].num == valor){
			return mid;
		}
		else if (v[mid].num < valor){
			start = mid + 1;
		}
		else if (v[mid].num > valor){
			end = mid - 1;
		}
	}
	return -1;
}