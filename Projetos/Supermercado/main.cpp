#include "main.h"

/* Functions to the class list:
    *push() - 
        if type == 1 : push at the end;
        if type == 2 : push at the top;

    *pop() - 
        if type == 1 : remove at the top;
        if type == 2 : remove at the end;

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
list<int>caixa_filasimples(3);

caixa_filasimples.push(new int(10));	caixa_filasimples.cout();
caixa_filasimples.push(new int(20));	caixa_filasimples.cout();
caixa_filasimples.push(new int(30));	caixa_filasimples.cout();
caixa_filasimples.push(new int(999),0); caixa_filasimples.cout();
caixa_filasimples.pop(2);				caixa_filasimples.cout();

return 0;

}