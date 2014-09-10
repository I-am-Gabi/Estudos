//ALUNO ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940

#include <iostream>
using namespace std;

void readv(int v[], int n){
	for (int i=0; i < n; ++i){
		cin >> v[i];
	}
}

void printv(int v[], int n){
	for (int i=0; i < n; ++i){
		cout  << v[i] << " ";
	}
}

int main (){
	
int n; cin >> n;
int *pv = new int[n];
readv(pv,n);
printv(pv,n);
}