#include <iostream>
using namespace std;

void swap (int &a, int &b){
	int aux;
	aux = a;
	a = b;
	b = aux;
}

void imprime_v(int *v, int n){
	cout << endl;
	for (int i=0; i < n; ++i){
		cout << v[i] << " ";		
	}
}

void Insertion(int *v, int n){
	int eleito;
	for (int i = 1; i < n; ++i){
		eleito = v[i];
		int j = i-1;
		while ((j>=0) && eleito < v[j]){
			v[j+1] = v[j];
			j--;
		}
		v[j+1] = eleito;
	}
}

void Selection(int *v, int n){
	int i,j,menor;
	for (int i=0; i < n-1; ++i){
		menor = i;
		for (int j=i+1; j < n; ++j){
			if (v[menor] > v[j]){
				menor = j;
			}
		}
		if (i != menor){
			swap (v[i], v[menor]);	
		}
	}
}

void Bubble(int *v, int n){
	for (int i=0; i < n; ++i){
		for (int j=0; j < n-1; ++j){
			if (v[j] > v[j+1]){
				int aux = v[j+1];
				v[j+1] = v[j];
				v[j] = aux;
			}
		}
	}
}

int Quick(int v[], int left, int right) {  
  int l, r, x, aux;
  if (left < right) {
      x = v[(left+right)/2]; 
      l = left; 
      r = right;
    while (l <= r)
    {  
      while (v[l] < x) l++;
      while (x < v[r]) r--;
      if (l <= r) { 
        aux = v[l];
        v[l] = v[r];
        v[r] = aux;
        l++, r--;
      }
    }    
    Quick(v, left, r);
    Quick(v, l, right);
  } 
  return 0;
} 


int main (){	

	int v1[8] = {90,80,4,6,80,25,1,60};
	int v2[8] = {90,80,4,6,80,25,1,60};
	int v3[8] = {90,80,4,6,80,25,1,60};
	int v4[8] = {90,80,4,6,80,25,1,60};

	imprime_v(v1,8);
		cout << " - Original Vector" << " " << endl;
			cout << "\t\t   Start = 0 / End = 8" << endl;	

			Insertion(v1,8);
				imprime_v(v1,8);
				cout << " - Insertion" << " ";

			Selection(v2,8);
				imprime_v(v2,8);
				cout << " - Selection" << " ";

			Bubble(v3,8);
				imprime_v(v3,8);
				cout << " - Bubble" << " ";

			Quick(v4,0,7);
				imprime_v(v4,8);
				cout << " - Quick" << " ";

			cout << endl;
	return 0;	
}	