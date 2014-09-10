//ALUNO ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940

#include <iostream>
using namespace std;

template <class T>
T readv(T v[], int n){
	int med=0;
	for (int i=0; i < n; ++i){
		cin >> v[i];
		med += v[i];
	}
	return (med)/n;
}

/* template <class T>
void delv(T v[],int n){
	for (int i = 2; i < n; ++i)
		delete(&v[i]);
} */

int main (){
	
int n; cin >> n;
float *notas = new float[n];

cout << readv<float>(notas,n) << endl;
delete(notas);
/* delv<float>(notas,n); */

}