#include <iostream>

int max;

int maximo (int v[], int ini, int fim){
	
	int l = ini, r = fim;
	int m, esq,dir;

	if (l == r){
		return v[l];
	}

	else if (l < r){
		m = (l+r)/2;
		esq = maximo(v,l,m);
		dir = maximo(v,m+1,r);
		if (esq < dir){
			max = dir;
		}
	}

}


int main () {


int v[5] = {10,90,30,45,5};
std::cout << maximo(v,2,4) << std::endl;

}