#include <iostream>

float somafrac(float n){
	/* Essa função realiza operação de soma
de frações 1 + 1/2 + 1/3 + 1/4 + ... + 1/n */

	if (n == 1)
		return 1;
	else 
		return (1/n) + somafrac(n-1);
}

float somafracCAUDA(float n,float soma){
	/* Essa função realiza operação de soma
de frações 1 + 1/2 + 1/3 + 1/4 + ... + 1/n */
	if (n == 1)
		return soma;
	else						 
		return somafracCAUDA((n-1), soma + 1/n); //soma += 1/n; 
}

float somaiterativa(float n){
	float soma=1;
	while (n > 1){
		soma += 1/n;
		--n;
	}
	return soma;
}


int main (){
	std::cout << somafrac(5) << std::endl;
	std::cout << somafracCAUDA(5,1) << std::endl;
	std::cout << somaiterativa(5) << std::endl;
}