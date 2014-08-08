#include <iostream>

using namespace std;

int elevado(int k, int n){
	if (n == 0)
		return 1;
	else 
		return k * elevado(k,n-1);	
}


int main (){
	cout << elevado(2,31)-1 << endl;
}