#include <iostream>
#include <stdlib.h>
#include <sys/time.h> 
using namespace std;
typedef unsigned long long int uint64;

int max(int x, int y) {return (y > x)? y : x;}

int maxsum_n2(int *v,int *start, int *end,int n){
	int maxsum=0;
	int soma=0;
	for (int i=0; i < n; ++i){
		for (int j=i; j < n; ++j){
			soma += v[j];
			if (soma > maxsum){
				*start = i;
				*end = j;
				maxsum = soma;
			}
		}
		soma = 0;
	}
	return maxsum;
}
 
int maxsum_n(int *a, int size)
{
   int max_sum[size];
   int intervalo[size];
   
   max_sum[0] = max(0, a[0]);
   intervalo[0] = 0;

   for (int i = 1; i < size; ++i) {
   	if (max_sum[i-1] > 0) {
   		max_sum[i] = max_sum[i-1]+a[i];
   		intervalo[i] = intervalo[i-1];
   	}
   	else {
   		max_sum[i] = a[i];
   		intervalo[i] = i;
   	}
   }

   int max_v = 0;
   int max_i, max_f;

	for (int i = 0; i < size; ++i) {
	   	if (max_sum[i] > max_v) {
	   		max_v = max_sum[i];
	   		max_i = intervalo[i];
	   		max_f = i;
	   	}
	}   

	

}

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

int main(){
	/* Declaração variáveis de intervalo vetor */
	int start=0,end=0;
	/* Declaração variáveis contagem tempo */
	struct timeval t0, t1;
  	uint64 tempo;
  	/* Declaração Vetor com Semente 10 */
	int v[60000];	
	randomizeVector(v,60000);

	for (int n=50; n < 10000; n += 50){
		gettimeofday(&t0, NULL);
			for (int p=0; p < 100; ++p){
				//maxsum_n2(v,&start,&end,n);
				maxsum_n(v,n);
			}
    	gettimeofday(&t1, NULL);
    	tempo = (t1.tv_sec - t0.tv_sec) * 1000000; //microsegundos
    	tempo += t1.tv_usec - t0.tv_usec;
    	std::cout << n << "," << tempo << endl;
	}
}