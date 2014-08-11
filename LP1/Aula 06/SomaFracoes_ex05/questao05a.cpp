#include <iostream>

float somaiterativa(float n){
	float soma=1;
	while (n > 1){
		soma += 1/n;
		--n;
	}
	return soma;
}

int main (){
	std::cout << somaiterativa(5) << std::endl;
}