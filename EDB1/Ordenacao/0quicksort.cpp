#include<iostream>

	using namespace std;

void trocaValores(int* a, int* b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
 
int divide(int vec[], int esquerdo, int direito)
{
    int i, j;
 
    i = esquerdo;
    for (j = esquerdo + 1; j < direito; ++j)
    {
        if (vec[j] < vec[esquerdo])
        {
            ++i;
            trocaValores(&vec[i], &vec[j]);
        }
    }
    trocaValores(&vec[esquerdo], &vec[i]);
 
    return i;
}
 
void quickSort(int vec[], int esquerdo, int direito)
{
    int r;
 
    if (direito > esquerdo)
    {
        r = divide(vec, esquerdo, direito);
        quickSort(vec, esquerdo, r - 1);
        quickSort(vec, r + 1, direito);
    }
}


int main(){
	int n, ini = 0;
	cin >> n;
	int v[n];
	for(int i = 0; i < n; i++)
		cin >> v[i];
	quickSort( v, ini, n );
	for(int i = 0; i < n; i++)
		cout << v[i] << " ";
	return 0;	
}
