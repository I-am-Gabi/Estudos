#include <iostream>
using namespace std;
int main (){
	int x;
	int *p = new int;
	if (p){
		cout << "---------Memory Allocated With Success---------" << endl;
		cout << "ADRRES *****  " << p << endl;
		cout << "       *****  " << *p << endl;
		*p = 10;
		cout << *p << endl;
		delete (p);
		p = new int;
		cout << p << endl;
		cout << *p << endl;	
	}
	else
		cout << "No success - NULL" << endl;
}

/* Porque int i; cout <<i; dá lixo */
	
