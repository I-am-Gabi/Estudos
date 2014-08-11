
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

int main (){
	std::cout << dectobinCauda(52,0,1) << std::endl;
}