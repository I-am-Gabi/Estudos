//ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940

#include "01ContaBancaria.h"

ContaBancaria::ContaBancaria(string nome,int num){
            name = nome;
            numero = num;
            saldo = 0;
}

void ContaBancaria::deposito(double num){
			if (num > 0){
            saldo = saldo + num;}
}
void ContaBancaria::saque(double num){
			if (num <= saldo){
            saldo = saldo - num;}
            else {cout << " saldo insuficiente " << endl;	}
}
double ContaBancaria::versaldo(){
			cout << name << " : ";
            cout << saldo << endl;
            return saldo;
}
