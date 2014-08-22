// ALUNO ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940
#include <iostream>
using namespace std;

int integerPower(int base,int expoente){
	if (expoente > 1){
		return base * integerPower(base, expoente-1);
	}
}

float integerPower(float base,int expoente){
	if (expoente > 1){
		return base * integerPower(base, expoente-1);
	}
}

int main (){
cout << integerPower(2,2) << " = "<< integerPower(2.0f,2) << endl;
cout << integerPower(2,3) << " = "<< integerPower(2.0f,3) << endl;
cout << integerPower(3,2) << " = "<< integerPower(3.0f,2) << endl;
cout << integerPower(3,3) << " = "<< integerPower(3.0f,3) << endl;
}