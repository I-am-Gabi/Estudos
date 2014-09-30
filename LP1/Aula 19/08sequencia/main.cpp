#include <iostream>
#include "fila.h"

using std::cout;
using std::endl;
using std::string;
using std::cin;

int main() {
	int i = 0, numero, max = 5;
	Fila *fila = new Fila;
	inicializa(fila); 

	string str;

	cin >> str;
	int n = 0; 

	while (n < str.size()){
		string str2 = str.substr(n,1);   
		enfilera(fila, str2);
		n++;
	}
	imprime(fila);
	//imprime_contraria(fila);
	if(verificar(fila, fila->tamanho))
		cout << "Sequencia está correta" << endl;
	else
		cout << "Sequencia está incorreta" << endl;
}