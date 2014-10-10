//ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940
#ifndef _01DEQUE_
#define _01DEQUE_

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;
using std::cin;

class matrizcl {
    private:
		int** mainmat;
		int linhas;
		int colunas;
	public:
		matrizcl(int n, int m);
		void cria();
		void imprime();
		void acessa(int n, int m);
		void atribui(int i, int p,int number);
		void qlinhas();
		void qcolunas();
		void matdelete();
};

#endif
