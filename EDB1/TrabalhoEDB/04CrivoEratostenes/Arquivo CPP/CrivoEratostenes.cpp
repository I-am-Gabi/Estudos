/* ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940 */
#include <iostream> // Biblioteca Padrão C++
#include <sys/time.h> // Biblioteca de tempo

using namespace std;
typedef unsigned long long int uint64;

int n= 100;

void imprime_v(int *v){
	/* Esta função é responsável por imprimir
	todos os valores > 0 do vetor, ou seja,
	todos os que não foram marcados e são
	primos */
	for (int i=2; i <= n; ++i){
		if (v[i] > 0){
			cout << v[i] << " ";	
		}

	}
}

void preenche_v(int *v){
	/* Esta função é responsável por preencher um vetor 
	com n elementos do número 2 até n */
	for (int i=2; i <= n; ++i){
		v[i] = i;
	}
}

void crivo(int *v, int i = 2, int j = 0){
	/* Esta função percorre o vetor de n elementos,
	e elimina os números que são múltiplos, ou seja,
	não são primos. O resultado é um vetor onde todos
	elementos que são > 0 são primos */

	while (i*i <= n){
		/* Marca os múltiplos  do menor com -1 */
		for (j=i+1; j <= n; j++){
			if (v[j]!= -1 && j % i == 0){
				v[j] = -1; 
			}
		}
		/* Este for pula os marcados até o próximo menor j */
        for (j = i + 1; v[j] == -1 && j <= n; j++);
        i = j; /* i recebe o valor do menor: j */

	}

}

void verifica_tempo(int *v){
	/* Esta função é responsável por coletar o
	tempo de execução do algorítimo e imprimir
	na saída padrão o valor de n e o tempo em
	microsegundos */
	struct timeval t0, t1;
  	uint64 tempo;

	for (int p=0; p <= 10000; p += 50){
		gettimeofday(&t0, NULL);
			n = p;
		for (int k=0; k < 100; ++k){
			crivo(v);
		}
    	gettimeofday(&t1, NULL);
    	tempo = (t1.tv_sec - t0.tv_sec) * 1000000; //microsegundos
    	tempo += t1.tv_usec - t0.tv_usec;
    	std::cout << n << "," << tempo/10 << endl;
	}



}



int main (){
	int vetor[50000] = {0}; // Declara vetor V.
	preenche_v(vetor); // Preenche vetor V.
	verifica_tempo(vetor); // Verifica o tempo.



}