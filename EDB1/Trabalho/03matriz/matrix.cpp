#include <iostream>
#include <stdio.h>

using namespace std;
bool findInMatrix(int *v, int n, int X){
	/* Essa função é responsável por verificar se
	o há algum elemento de valor X na matriz, caso
	sim, retorna true, se não houver retorna false */
		for (int i = 0; i < (n*n); ++i){
			if (*(v+i) == X)
				return true;
		} 
	return false;
}

int main (){
	int valor = 5;
	int matrix[4][4] = {{1,2,3,4},{10,20,30,40},{100,200,300,400},{1000,2000,3000,4000}};
	
	cout << findInMatrix(&matrix[0][0],4,10) << endl; // Resultado esperado: 1
	cout << findInMatrix(&matrix[0][0],4,100) << endl; // Resultado esperado: 1
	cout << findInMatrix(&matrix[0][0],4,8) << endl; // Resultado esperado: 0
	cout << findInMatrix(&matrix[0][0],4,9) << endl; // Resultado esperado: 0


}