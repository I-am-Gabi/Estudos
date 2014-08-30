#include <iostream>

using namespace std;

enum elemento { Azul = 1, Vermelho = 2 };

int quickSort(int v[], int left, int right) 
{  
 	int r, l, x, y;
  	l = left;
  	r = right;
  	x = v[right];
  	int aux;
	for (int j = left; j < right; j++)
	{ 
		if (v[j] < x)
		{	 
			aux = v[l];
			v[l] = v[j];
			v[j] = aux;
			l++;
		} 
	} 
	aux = v[right];
	v[right] = v[l + 1]; 
	v[l + 1] = aux;
	return 0;
} 

int imprime(int num[], int esquerda, int direita, int (*fun) (int*, int, int)) {
	fun(&num[0], esquerda, direita);
	for (int i = esquerda; i <= direita; ++i)
	{
		cout << num[i] << " ";
	}
	cout << "" << endl;
}

int main() {
	int num[] = { Azul, Vermelho, Azul, Vermelho, Azul, Vermelho};
	int v[] = {50,2,40,60,1,9,3};
	int (*pontFunc)(int*, int, int);
	
	pontFunc = quickSort; 
	imprime(&v[0], 0, 6, pontFunc); 
  
	return 0;
}