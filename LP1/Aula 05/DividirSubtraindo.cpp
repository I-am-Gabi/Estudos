#include <iostream>
using namespace std;

int divide(int a,int b){
	if (a < b)
		return 0;
	else 
		return 1 + divide(a - b,b);
}

int main() {
int a,b;
	cin >> a >> b;
	system("clear");
	cout << endl <<"Q = " << divide (a,b) << endl;
	cout << "R = " << a - b*divide (a,b) << endl;
}
