#include <iostream>

int main (){
	
	int i=7,j=3;
	int *p;
	int **r;
	p = &i;
	r = &p;
	int c = **r + j;
	return 0;
}