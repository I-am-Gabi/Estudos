// ALUNO ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940
#include <iostream>
using namespace std;

void quadrado(int n, char p = '*'){
	for(int i=0; i < n; ++i){
		for (int j=0; j < n; ++j){
			cout << p << " ";	
		}
	cout << endl;
	}
}

int main (){
quadrado(5);
cout << endl;
quadrado(5,'a');
}