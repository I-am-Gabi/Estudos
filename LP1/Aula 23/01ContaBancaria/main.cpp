//ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940
#include "01ContaBancaria.h"

int main (void){

ContaBancaria account1("nome1",1280);
ContaBancaria account2("nome2",9870);

account1.versaldo();
account1.deposito(587.50);
account1.versaldo();
account1.saque(500);
account1.versaldo();

account2.versaldo();
account2.deposito(745.65);
account2.versaldo();
account2.saque(500);
account2.versaldo();

}

