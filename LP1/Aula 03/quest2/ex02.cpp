#include <iostream>

int main () {
	int i=99,j;
	int *p;
	p = &i;
	j = *p + 100;
	return 0;
}