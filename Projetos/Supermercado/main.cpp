#include "main.h"
#include <fstream>

int main (){

    gerenciador g;
    g.lerDoc();

    srand((unsigned)time(NULL)); 

    caixa c01(1); //caixa nome(ID do caixa)
    c01.addcliente(11); //addcliente(nome,ID,saldo)
    c01.addcliente(12);
    c01.addcliente(12);
    c01.addcliente(13);
    c01.addcliente(14);

    caixa c02(2); //caixa nome(ID do caixa)
    c02.addcliente(21); //addcliente(nome,ID,saldo)
    c02.addcliente(22);  
    c02.addcliente(23);
    c02.addcliente(24);
    c02.addcliente(25);
    c02.addcliente(26);

    supermercado vaptvupt;
    vaptvupt.addcaixa(&c01);
    vaptvupt.addcaixa(&c02);
    vaptvupt.coutmenor(); 

    return 0;
}

/* Functions to the class list:
    list type = 1 : fila || type = 2 : pilha || type = 3 : lista simples
    *push() - 
        if type == 1 : push at the end;
        if type == 2 : push at the top;
        if type == 3 : push at the value pos;
    *pop() - 
        if type == 1 : remove at the top;
        if type == 2 : remove at the end;
        if type == 3 : remove at the value pos;
    *size() - 
        returns the size of list;
    *cout() - 
        print all elements of list;
    *search( element ) - 
        returns a pointer to node of the element;
    *showpos( position ) - 
        returns the element in the position;
*/