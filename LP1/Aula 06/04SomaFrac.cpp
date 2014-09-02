#include <iostream>

float A_somafrac(float n){
	/* Essa função realiza operação de soma
de frações 1 + 1/2 + 1/3 + 1/4 + ... + 1/n */
	if (n == 1)
		return 1;
	else 
		return (1/n) + somafrac(n-1);
}

float A_somafracCAUDA(float n,float soma){
	/* Essa função realiza operação de soma
de frações 1 + 1/2 + 1/3 + 1/4 + ... + 1/n */
	if (n == 1)
		return soma;
	else						 
		return somafracCAUDA((n-1), soma + 1/n); //soma += 1/n; 
}

float A_somaiterativa(float n){
	float soma=1;
	while (n > 1){
		soma += 1/n;
		--n;
	}
	return soma;
}


float B_somafrac(float n){
	if (n <= 0)
		return 0;
	else {
		return ((n*n + 1)/(n + 3)) + somafrac(n-1);	
	}
}

float B_somafracCAUDA(float n,float soma){
	if (n <= 0)
		return soma;
	else {
		return somafracCAUDA((n-1),soma + (n*n + 1)/(n + 3));	
	}
}


int main (){
	std::cout << somafrac(5) << std::endl;
	std::cout << somafracCAUDA(5,0) << std::endl;

}