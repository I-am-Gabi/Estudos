#include <iostream>

int dectobinCauda(int n, int resultado, int potencia){
	if (n == 0)
		return resultado;

	else {
		resultado += potencia*(n%2);
		potencia *= 10; 
		n = n/2;
		return dectobinCauda(n, resultado, potencia);
	}
}

int dectobin(int num){
	if (num == 0)
		return 0;
	else 
		return (num % 2) + 10*(dectobin(num/2));
}

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