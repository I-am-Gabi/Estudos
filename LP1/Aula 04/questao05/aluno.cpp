#include <iostream>
#include <string>
#include "alunolib.h"
using namespace std;
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