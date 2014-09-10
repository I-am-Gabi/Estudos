//ALUNO ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940

#include <iostream>
using namespace std;

void imprime_mt(double **mt, int n, int m){
	for (int i = 0; i < m; ++i){
		for (int j=0; j < n; ++j){
			cout << mt[i][j] << " ";
		}
		cout << endl;
	}
}

void preenche_mt(double **mt, int n, int m){
	for (int i = 0; i < m; ++i){
		for (int j=0; j < n; ++j){
			mt[i][j] = 5.5;
		}
	}
}

void soma_mt(double **A, double **B, double **sum, int m, int n){
	for (int i = 0; i < m; ++i){
		for (int j=0; j < n; ++j){
			sum[i][j] = A[i][j] + B[i][j];
		}
	}
}

double alocar_mt(double **matriz, int m, int n){
	if (matriz != NULL){
		for (int i=0; i < n; ++i){
			matriz[i] = new double[n];
			if (matriz[i] == NULL){cout << "ERROR" << endl;} 
		}
	}

}

int main (){
	int m,n; 
	cin >> m >> n;

	double **A = new double*[m];
	double **B = new double*[m];
	double **SOMA = new double *[m];

	alocar_mt(A,m,n);
	alocar_mt(B,m,n);
	alocar_mt(SOMA,m,n);

	preenche_mt(A,m,n);
	preenche_mt(B,m,n);

	imprime_mt(A,m,n);
	imprime_mt(B,m,n);

	soma_mt(A,B,SOMA,m,n);
	imprime_mt(SOMA,m,n);

}