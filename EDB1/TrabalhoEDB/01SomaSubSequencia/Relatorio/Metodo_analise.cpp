#include <sys/time.h> 

typedef unsigned long long int uint64;

int main () {
	/* Declaração de variaveis */
	struct timeval t0, t1;
  	uint64 tempo;
  	/* Obtenção tempo inicial */
	gettimeofday(&t0, NULL);
	<... Soma Subsequencia ...>
	/* Obtenção tempo final */
	gettimeofday(&t1, NULL);
    tempo = (t1.tv_sec - t0.tv_sec) * 1000000; //MicroSeg
    tempo += t1.tv_usec - t0.tv_usec;
    std::cout << n << "," << tempo/100 << endl;
}