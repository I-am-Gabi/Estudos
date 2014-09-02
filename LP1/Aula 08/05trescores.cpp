#include <iostream>

using namespace std;

enum elemento { Azul = 1, Vermelho = 2, Amarelo = 3};

void sortprint (int *v, int l, int r,int (*func)(int*,int,int)){
	func(v,l,r);
	cout << endl;
	for (int i=0; i < r; ++i){
		cout << " " << v[i] << " ";
	}
}
int partition(int *v,int l,int r){
	int pivot = v[r]; int i=l-1;
		for (int j=l; j < r; ++j){
			if (v[j] < pivot){++i; swap(v[i],v[j]);};
		}
	swap(v[i+1],v[r]); return i+1;
}
int ordena(int *v, int l, int r){
	int q;
	if (l < r){
		q = partition(v,l,r);
		ordena(v,l,q-1);
		ordena(v,q+1,r); 
	}
}
int main() {
	int vetor[9] = {Azul,Vermelho,Amarelo,Amarelo,
					Vermelho,Azul,Azul,Vermelho,
					Amarelo};

	sortprint(vetor,0,8,ordena);
	return 0;
}