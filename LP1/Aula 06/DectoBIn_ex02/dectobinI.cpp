#include <iostream>

int dectobinI(int n){
	
	int result = 0;
	int pot = 1;

	while (n>0){
		result += pot *(n%2);
		pot *= 10;
		n = n/2;
	}

	return result;

}

int main (){
	
	std::cout << dectobinI(52) << std::endl;

}