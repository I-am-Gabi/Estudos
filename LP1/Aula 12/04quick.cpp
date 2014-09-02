#include <iostream>
using namespace std;

void imprime_v(int *v, int n){
	cout << endl;
	for (int i=0; i < n; ++i){
		cout << v[i] << " ";		
	}
}

int partition(int v[], int l, int r){
	int pivot = v[r], i = l-1;
	for (int j=l; j < r; ++j){
		if (v[j] < pivot){i++; swap(v[i],v[j]);};
	}
	swap(v[i+1],v[r]); return i+1;
}
int quicksort (int v[], int l,int r){
	int q;
	if (l < r){
		q = partition(v,l,r);
		quicksort(v,l,q-1);
		quicksort(v,q+1,r);
	}
}

int main (){=
	int v[10] = {9,5,4,3,2,4,8,9,7,10};
	imprime_v(v,10);
	quicksort(v,0,9);
	imprime_v(v,10);
}