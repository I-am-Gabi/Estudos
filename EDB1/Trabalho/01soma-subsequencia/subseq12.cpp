#include <iostream>
#include <stdlib.h>
#include <sys/time.h> 
using namespace std;
typedef unsigned long long int uint64;

int max(int x, int y) {return (y > x)? y : x;}

int randomizeVector(int *v,int n){
	srand(10);
	for (int i=0; i < n; ++i){
	v[i] = rand() %20 - 13;	
	}
}

int printVector(int *v,int n){
	for (int i=0; i < n; ++i){
	cout << v[i] << " ";	
	}
}

int maxsum_n2(int *v,int *start, int *end,int n){
	int maxsum=0;
	int sum=0;
	for (int i=0; i < n; ++i){
		for (int j=i; j < n; ++j){
			sum += v[j];
			if (sum > maxsum){
				*start = i;
				*end = j;
				maxsum = sum;
			}
		}
		sum = 0;
	}
	return maxsum;
}
 
int maxsum_n(int *vetor, int *start, int * end,int size)
{
   int max_ate_agora = vetor[0], i;
   int max_atual = vetor[0];
 
   for (i = 1; i < size; i++)
   {
   		*start = i;
        max_atual = max(vetor[i], max_atual+vetor[i]);
        max_ate_agora = max(max_ate_agora, max_atual);
   }
   return max_ate_agora;
}

int main(){
	/* Declaração variáveis de intervalo vetor */
	int start=0,end=0;
	/* Declaração variáveis contagem tempo */
	struct timeval t0, t1;
  	uint64 tempo;
  	/* Declaração Vetor com Semente 10 */ 
	int v[10000];	
	randomizeVector(v,10000);

	//for (int n=50; n < 50050; n += 50){
		//gettimeofday(&t0, NULL);
			//for (int p=0; p < 100; ++p){
				//maxsum_n2(v,&start,&end,n);
				std::cout << maxsum_n2(v,&start,&end,10000) << std::endl;
				std::cout << start << " ate " << end << std::endl;				
				std::cout << maxsum_n(v,&start,&end,10000) << std::endl;

				//std::cout << maxsum_n(v,n) << std::endl;
			//}
    	//gettimeofday(&t1, NULL);
    	//tempo = (t1.tv_sec - t0.tv_sec) * 1000000; //microsegundos
    	//tempo += t1.tv_usec - t0.tv_usec;
    	//std::cout << n << "," << tempo/100 << endl;
	//}
}