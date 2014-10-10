//ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940
#ifndef _01DEQUE_
#define _01DEQUE_

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;
using std::cin;

class ContaBancaria {
    private:
        string name;
        int numero;
        double saldo;   
    public:
        ContaBancaria(string name,int num);
        void deposito(double num);
        void saque(double num);
        double versaldo();
};

#endif
