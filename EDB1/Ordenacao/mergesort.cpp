#include <iostream>

using namespace std;

void intercala(int X[], int inicio, int fim, int mid) {
	int pos_free, v1_in, v2_in, i;
	int aux[10];
	v1_in = inicio;
	v2_in = mid + 1;
	pos_free = inicio;
	while ((v1_in <= mid) && (v2_in <= fim)) {
		if (X[v1_in] <= X[v2_in]) {
			aux[pos_free] = X[v1_in];
			v1_in = v1_in + 1;
		}
		else {
			aux[pos_free] = X[v2_in];
			v2_in = v2_in + 1;
		}
		pos_free = pos_free + 1;
	}

	for (i = v1_in; i <= mid; i++) {
		aux[pos_free] = X[i];
		pos_free = pos_free + 1;
	}
	for (i = v2_in; i <= fim; i++) {
		aux[pos_free] = X[i];
		pos_free = pos_free + 1;
	}
	for (int i = inicio; i < fim; ++i)
	{
		X[i] = aux[i];
	}
}

void merge(int X[], int inicio, int fim) {
	int mid;
	if (inicio < fim) {
		mid = (inicio + fim)/2;
		merge(X, inicio, mid);
		merge(X, mid + 1, fim);
		intercala(X, inicio, fim, mid);
	}
}

int main() {
	int X[10] = {1, 2, 4, 6, 8, 9, 3, 5, 7, 10 };
	merge(X, 0, 9);
	for (int i = 0; i < 9; ++i)
	{
		cout << X[i] << " ";
	}
}