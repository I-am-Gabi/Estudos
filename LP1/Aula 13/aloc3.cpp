#include <iostream>
using namespace std;
int main (){
	int y;
	cin  >> y; 
	int *b; int i=0;
	b = new int[y];

	while (i < y) {
		b[i] = i;
		cout << b[i] << " " ;
		++i;
	}
	delete(b);
	cout << endl;
	cout << b[0] << endl;
	cout << b[1] << endl;
	cout << b[2] << endl;
	cout << b[5] << endl;
	cout << b[8] << endl;
}

/* Porque int i; cout <<i; dá lixo */
	
