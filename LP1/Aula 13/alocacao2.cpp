#include <iostream>
using namespace std;
int main (){
	int *p = new int;
	int i=0;
	while (i < 1000000000){
		new int;
		++i;
	}
	if (p) 	delete p;
	cout << p << endl;
	cout << *p << endl;
	return 0;
}

/* Porque int i; cout <<i; dá lixo */
	
