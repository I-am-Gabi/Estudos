#include <iostream>

float somafrac(float n){
	if (n <= 0)
		return 0;
	else {
		return ((n*n + 1)/(n + 3)) + somafrac(n-1);	
	}
}

float somafracCAUDA(float n,float soma){
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