// ALUNO ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940
#include <iostream>
using namespace std;

int func_somadig(int n){
	int somadig=0;
	while (n > 0){
		somadig += n % 10;
		n /= 10;
	}
	return somadig;
}

int func_somadig(float nfloat){
	while (nfloat - (int)nfloat > 0){ nfloat *= 10;};
	func_somadig((int)nfloat);
}

int main (){
cout << "INT=123321  " << func_somadig(123321) << endl;
cout << "FLOAT=123.321  " << func_somadig(123.321f) << endl;
cout << endl;
cout << "INT=15598  " << func_somadig(15598) << endl;
cout << "FLOAT=15.598  " << func_somadig(15.598f) << endl;
}