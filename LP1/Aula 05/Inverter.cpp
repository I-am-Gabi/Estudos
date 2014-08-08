#include <iostream>
using namespace std;

int inverter (int n,int algo){
	int mod,contador=0;

	if (n == 0)
		return 0;
	else {
		mod = (n % 10);
		cout << "mod = " << mod << endl;
		cout << "n = " << n/10 << endl;
		return mod*algo + inverter(n/10,algo/10);
	}

}

int main() {

	int n = 1589;
	cout << inverter (n,1000) << endl;

}
