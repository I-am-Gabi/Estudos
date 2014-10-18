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

std::cout << " FILA - TYPE 01 " << std::endl;
list<int>caixa_fila(1);

caixa_fila.push(new int(10));	caixa_fila.cout();
caixa_fila.push(new int(20));	caixa_fila.cout();
caixa_fila.push(new int(30));	caixa_fila.cout();
caixa_fila.pop();				caixa_fila.cout();

std::cout << " PILHA - TYPE 02 " << std::endl;
list<int>caixa_pilha(2);

caixa_pilha.push(new int(10));	caixa_pilha.cout();
caixa_pilha.push(new int(20));	caixa_pilha.cout();
caixa_pilha.push(new int(30));	caixa_pilha.cout();
caixa_pilha.pop();				caixa_pilha.cout();

std::cout << " LISTA SIMPLES - TYPE 03 " << std::endl;
list<int>caixa_lista(3);

caixa_lista.push(new int(10));	caixa_lista.cout();
caixa_lista.push(new int(20));	caixa_lista.cout();
caixa_lista.push(new int(30));	caixa_lista.cout();
caixa_lista.push(new int(999),0); caixa_lista.cout();
caixa_lista.pop(2);				caixa_lista.cout();

std::cout << "- FILA CLIENTES -" << std::endl;
list<cliente>list_clientes(1); // TYPE 01 = FILA;
cliente * aux;

for (int i=0; i < 10; i++){
	aux = new cliente;
	aux->ID = i;
	list_clientes.push(aux);
}

list_clientes.cout_cliente();


return 0;

}