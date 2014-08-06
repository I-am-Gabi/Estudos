#include <iostream>

using namespace std;

int somarVetor (int *v, int n){


	if (n == 0){
		return 0;
	}
	else 
	return *v + somarVetor (*(v++),n-1);


}


int main (){

	int v[5] = {1,2,3,4,5}
	somarVetor ()

}