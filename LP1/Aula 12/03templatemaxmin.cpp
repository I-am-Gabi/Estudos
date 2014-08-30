//ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940

#include <iostream>

template <class type>
	type aux(type v[], type ini, type fim, type &max, type &min){
	type l = ini, r = fim;
	type m, esq,dir;

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
	type maxmin(type v[], type n, type &max, type &min){ return aux(v,0,n,max,min)}



int main () {

	int max=0;
	int min=0;
	int v[5] = {10,90,30,45,5};
	maxmin(v,4,max,min);
	std::cout << max << " e " << min << std::endl;

}