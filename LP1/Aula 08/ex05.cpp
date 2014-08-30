#include <iostream>

using namespace std;

enum elemento { Azul = 1, Vermelho = 2, Amarelo = 3 };

int quickSort(int v[], int left, int right) 
{  
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
		quickSort(v, left, r);
      	quickSort(v, l, right);
	} 
	return 0;
} 

int imprime(int num[], int esquerda, int direita, int (*fun) (int*, int, int)) {
	fun(&num[0], esquerda, direita); 
	for (int i = esquerda; i <= direita; i++)
	{
		cout << num[i] << " ";
	}
	cout << "" << endl;
}

int main() {
	int num[] = { Azul, Vermelho, Amarelo, Azul, Vermelho, Amarelo, Azul, Amarelo };

	int (*pontFunc)(int*, int, int);
	int var = (sizeof(num)/sizeof(num[0])); 
	pontFunc = quickSort; 
	imprime(&num[0], 0, var-1, pontFunc); 
  
	return 0;
}