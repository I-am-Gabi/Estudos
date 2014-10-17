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
	
list<int>caixa1(1);

caixa1.push(new int(10));caixa1.cout();
caixa1.push(new int(20));caixa1.cout();
caixa1.push(new int(30));caixa1.cout();
caixa1.push(new int(40));caixa1.cout();
caixa1.push(new int(50));caixa1.cout();
caixa1.push(new int(60));caixa1.cout();
caixa1.pop();caixa1.cout();
caixa1.size();

return 0;

}