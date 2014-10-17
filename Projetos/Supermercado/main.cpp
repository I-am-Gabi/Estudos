#include "main.h"

/* Functions to the class list:

	pushfront() - to add at the top;
	pushback() - to add at the end ;
	popfront() - to remove at the top;
	popback() - to remove at the end;
	size() - returns the size of list;
	cout() - to print all elements of list;
	search( element ) - returns a pointer to node of the element;
	showpos( position ) - returns the element in the position;

*/

int main (){
	
list<int>caixa1;

caixa1.pushfront(new int(10));caixa1.cout();
caixa1.pushback(new int(20));caixa1.cout();
caixa1.pushback(new int(30));caixa1.cout();
caixa1.pushback(new int(40));caixa1.cout();
caixa1.pushback(new int(50));caixa1.cout();
caixa1.size();

std::cout << caixa1.showpos(3) << std::endl; 
std::cout << *(caixa1.search(30)->data) << std::endl; 

return 0;

}