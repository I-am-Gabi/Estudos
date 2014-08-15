#include <ctime>
#include <cmath>
#include <iostream>

float somafrac(float n){

	if (n == 1)
		return 1;
	else 
		return (1/n) + somafrac(n-1);
}

float somafracCAUDA(float n,float soma){
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

  time_t t0, t1;
  clock_t c0,c1;
  //double a,b,c;


  for (int n = 50; n < 10000; n += 50){
    	t0 = time(NULL); 
  		c0 = clock();
    for (int p=0; p < 100; ++p){
        somafracCAUDA(n,0);
    }
        t1 = time(NULL);
    	c1 = clock();      

  }

    std::cout << "CLOCK100:" << ((t1-t0))*1000 << "\t"<<std::endl;
    std::cout << "CPU100:" << ((c1-c0)/CLOCKS_PER_SEC)*1000;
}