// ALUNO ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940
#include <iostream>
using namespace std;

int integerPower(int base,int expoente){
	if (expoente > 1){
		return base * integerPower(base, expoente-1);
	}
}


int main (){
cout << integerPower(3,4) << endl;
}