#include <iostream>

using namespace std;

int somar(int *v, int n){

	if (n <= 0)
		return 0;

	else {
		return v[n-1] + somar(v,n-1);
	}

}


int main (){

	int v[5] = {2,2,2,1,3};
	
	cout << somar(v, 5) << endl;


}