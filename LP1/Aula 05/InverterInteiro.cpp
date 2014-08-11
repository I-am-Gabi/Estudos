#include <iostream>

using namespace std;

int inverter(int num, int res){
	if (num == 0)
		return res;
	else 
		return inverter (num/10, (num%10) + (res*10));
}


int main (){
int x=123456789;
cout << inverter (x,0) << endl;
}