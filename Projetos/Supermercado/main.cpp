#include "main.h"

int main (){
	

lista<int>caixa1;
caixa1.pushfront(new int(10));
caixa1.pushback(new int (20));
caixa1.listar();
caixa1.popfront();
caixa1.listar();
caixa1.popback();
caixa1.listar();
return 0;

}