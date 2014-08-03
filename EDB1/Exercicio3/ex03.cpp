#include <iostream>

void ordena(int *v, int n, int k){
int aux;

for (int i=0; i < n; ++i){
	for (int j=0; j < k; ++j){
		if (v[i] < v[j]){
			aux = v[i];
			v[i] = v[j];
			v[j] = aux;	
		}
	}
}

}

void printv(int *vetor, int n){
 	for(int i=0; i < n; ++i){
 		std::cout << vetor[i] << " ";
 	}
	std::cout << std::endl;
}

int main (){

int vetor[] = {3,5,2,1,4,8,1};

int k = 1;
ordena(vetor, 7, k);
printv(vetor,7);
std::cout << k << " menor elemento é " << vetor[k-1] << std::endl;

}