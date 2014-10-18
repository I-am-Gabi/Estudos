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

caixa_fila.push(10);	caixa_fila.cout();
caixa_fila.push(20);	caixa_fila.cout();
caixa_fila.push(30);	caixa_fila.cout();
caixa_fila.pop();				caixa_fila.cout();

std::cout << " PILHA - TYPE 02 " << std::endl;
list<int>caixa_pilha(2);

caixa_pilha.push(10);	caixa_pilha.cout();
caixa_pilha.push(20);	caixa_pilha.cout();
caixa_pilha.push(30);	caixa_pilha.cout();
caixa_pilha.pop();				caixa_pilha.cout();

std::cout << " LISTA SIMPLES - TYPE 03 " << std::endl;
list<int>caixa_lista(3);

caixa_lista.push(10);	caixa_lista.cout();
caixa_lista.push(20);	caixa_lista.cout();
caixa_lista.push(30);	caixa_lista.cout();
caixa_lista.push(999,0); caixa_lista.cout();
caixa_lista.pop(2);				caixa_lista.cout();




return 0;

}