#include "main.h"

/* Functions to the class list:
	list type = 1 : fila
	list type = 2 : pilha
	list type = 3 : lista simples
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

int main (){

caixa c01(1); //caixa nome(ID do caixa)
c01.addcliente("nome1",1,258);
c01.addcliente("nome2",2,640);
c01.addcliente("nome3",3,521);
c01.addcliente("nome4",4,987);
c01.addcliente("nome5",5,1680);

caixa c02(2); //caixa nome(ID do caixa)
c02.addcliente("nome1",1,720);
c02.addcliente("nome2",2,150);
c02.addcliente("nome3",3,350);
c02.addcliente("nome4",4,640);
c02.addcliente("nome5",5,1420);
c02.addcliente("nome6",6,1730);

supermercado vaptvupt;
vaptvupt.addcaixa(&c01);
vaptvupt.addcaixa(&c02);
vaptvupt.cout();



return 0;

}

// ABAIXO EXEMPLOS DE APLICAÇÕES

/* std::cout << " FILA - TYPE 01 " << std::endl;
list<int>fila(1);

fila.push(new int(10));   fila.cout();
fila.push(new int(20));   fila.cout();
fila.push(new int(30));   fila.cout();
fila.pop();               fila.cout();
*/

/*std::cout << " PILHA - TYPE 02 " << std::endl;
list<int>pilha(2);

pilha.push(new int(10));  pilha.cout();
pilha.push(new int(20));  pilha.cout();
pilha.push(new int(30));  pilha.cout();
pilha.pop();              pilha.cout();
*/

/* std::cout << " LISTA SIMPLES - TYPE 03 " << std::endl;
list<int>caixa_lista(3);

lista.push(new int(10));    lista.cout();
lista.push(new int(20));    lista.cout();
lista.push(new int(30));    lista.cout();
lista.push(new int(999),0); lista.cout();
lista.pop(2);               lista.cout();
*/

/*std::cout << "- FILA CLIENTES -" << std::endl;
list<cliente>list_clientes(1); // TYPE 01 = FILA;
cliente * aux;

for (int i=0; i < 10; i++){
    aux = new cliente;
    aux->nome = "CLIENTE ID",i;
    aux->saldo = i*100+5*i + 2;
    aux->ID = i;
    list_clientes.push(aux);
}

list_clientes.cout_clientes();
*/