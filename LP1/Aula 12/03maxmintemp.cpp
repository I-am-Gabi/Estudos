//ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940

#include <iostream>

int aux(int v[], int ini, int fim, int &max, int &min){
	int l = ini, r = fim;
	int m, esq,dir;

	if (l == r){
		return v[l];
	}

	else if (l < r){
		m = (l+r)/2;
		esq = aux(v,l,m,max,min);
		dir = aux(v,m+1,r,max,min);
		if (esq < dir){
			max = dir;
			min = esq;
		}
	}
}

int maxmin(int v[], int n,int &max, int &min){
	return aux(v,0,n,max,min);
}

int main () {

int max,min;
int v[5] = {10,90,30,45,5};
maxmin(v,4,max,min);
std::cout << max << " e " << min << std::endl;

}