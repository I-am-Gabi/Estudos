//ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940

#include <iostream>

template <class type>
	type aux(type v[], type ini, type fim, type &max, type &min){
	type l = ini, r = fim;
	type m, esq,dir;

	if (l == r){ return v[l]; }

	else if (l < r){
		m = (l+r)/2;
		esq = aux(v,l,m,max,min);
		dir = aux(v,m+1,r,max,min);
		if (esq < dir){ max = dir; min = esq; }
	}
}

int main () {

	int max_i=0;
	int min_i=0;
	int v_i[5] = {10,90,30,45,5};

	float max_f = 0;
	float min_f = 0;
	float v_f[5] = {1.58,2.60,3.8,4.9,7.5};

	(int) aux<int>(v_i,0,4,max_i,min_i);
	std::cout << max_i << " e " << min_i << std::endl;

	(float) aux<float>(v_f,0,4,max_f,min_f);
	std::cout << max_f << " e " << min_f << std::endl;

}