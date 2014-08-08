#include <iostream>
using namespace std;

int inverter (int n){
	int mod,soma=0;

	if (n == 0)
		return 0;
	else {
		mod = (n % 10);
		cout << "mod = " << mod << endl;
		cout << "n = " << n/10 << endl;
		return 10*(mod + inverter((n-mod)/10)) ;
	}

}

int main() {

	int n = 1589;
	cout << inverter (n) << endl;

}
