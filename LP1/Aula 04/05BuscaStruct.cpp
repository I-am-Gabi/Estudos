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

int main (){

	int num;

	Aluno vetoraluno[] = { 	
							{"nome1", 1} , 
							{"nome2", 2} , 
							{"nome3", 3} , 
							{"nome4", 4} , 
							{"nome5", 5}
						};
	
	cin >> num;
	cout << vetoraluno[buscaAluno (vetoraluno,0,4,num)].nome << endl; 

}