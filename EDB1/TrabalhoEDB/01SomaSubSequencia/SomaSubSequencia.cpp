/* ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940 */
#include <iostream>
#include <stdlib.h>
#include <sys/time.h> 

using namespace std;
typedef unsigned long long int uint64;

int max(int x, int y) {return (y > x)? y : x;}

int maxsoma_n2(int *v,int *inicio, int *fim,int n){
	int soma_maxima=0;
	int soma=0;
	for (int i=0; i < n; ++i){
		for (int j=i; j < n; ++j){
			soma += v[j];
			if (soma > soma_maxima){
				*inicio = i;
				*fim = j;
				soma_maxima = soma;
			}
		}
		soma = 0;
	}
	return soma_maxima;
}
 
int maxsoma_n(int *vetor, int *inicio, int * fim,int size){
   int max_ate_agora = vetor[0], i;
   int max_atual = vetor[0];
 
   for (i = 1; i < size; i++)
   {
   		*inicio = i;
        max_atual = max(vetor[i], max_atual+vetor[i]);
        max_ate_agora = max(max_ate_agora, max_atual);
   }
   return max_ate_agora;
}

int randomizar_vetor(int *v,int n){
	srand(10);
	for (int i=0; i < n; ++i){
	v[i] = rand() %20 - 13;	
	}
}

int imprime_vetor(int *v,int n){
	for (int i=0; i < n; ++i){
	cout << v[i] << " ";	
	}
}

void verifica_tempo(int (*funcao)(int*,int*,int*,int),int *v,int n){
	/* Esta função é responsável por coletar o
	tempo de execução do algorítimo e imprimir
	na saída padrão o valor de n e o tempo em
	microsegundos */
	int start=0,end=0;
	struct timeval t0, t1;
  	uint64 tempo;

	cout << " - INICIO VERIFAÇÃO TEMPO - " << endl;

	for (int p=0; p <= n; p += 50){
		gettimeofday(&t0, NULL);
			for (int k=0; k < 100; ++k){
					funcao(v,&start,&end,p);
			}
    	gettimeofday(&t1, NULL);
    	tempo = (t1.tv_sec - t0.tv_sec) * 1000000; //microsegundos
    	tempo += t1.tv_usec - t0.tv_usec;
    	std::cout << p << "," << tempo/100 << endl;
	}

	cout << " - FIM VERIFAÇÃO TEMPO - " << endl;

}

int main(){
	int n = 10000;
	int vetor[10000];	
	
	randomizar_vetor(vetor,10000);

	verifica_tempo(maxsoma_n,vetor,n);

	verifica_tempo(maxsoma_n2,vetor,n);
}