#include <iostream>
#include <bitset>

using namespace std;

int dectobin(int num){
	if (num == 0)
		return 0;
	else 
		return (num % 2) + 10*(dectobin(num/2));
}


int main (){
	cout << dectobin(52);
}