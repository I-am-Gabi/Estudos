#include <iostream> // Biblioteca Padrão C++
#include <stdlib.h> // Srand() e Rand()
#include <sys/time.h>  // Biblioteca de tempo

using namespace std;
typedef unsigned long long int uint64;

int randInt(int i, int j){
	/* Esta função é responsavel por gerar
	um valor aleatório com semente no tempo
	da máquina */
	int random;
	srand((unsigned)time(NULL));
	random = rand() %(j+1);
	return random;
}

int printv(int *v,int n){
	/* Esta função é responsável por imprimir
	na saída padrão um vetor de n elementos */
	cout << endl;
	for (int i=0; i < n; ++i){
	cout << v[i] << " ";	
	}
	cout << endl;
}

bool JaTem(int *v, int n,int x){
	/* Esta função é responsavel por verificar
	se tem algum valor "x" no vetor, se sim, retorna
	verdadeiro, se não tiver retorna falso. */
	for (int i=0; i < n; ++i){
		if (v[i] == x){
			return true;
		}
	}
	return false;
}

void permut1(int *v, int n){
	/* Esta função preenche o vetor com n elementos
	de maneira que os elementos sejam a permutação
	dos n primeiros elementos */
	int i=0,random=0;
	while (i < n){
		random = randInt(0,n);
		if (!JaTem(v,n,random)){
			v[i] = random;
			++i;
		}
		else 
			random = randInt(0,n);
		}
}

void permut2(int *v, int n){
	/* Esta função preenche o vetor com n elementos
	de maneira que os elementos sejam a permutação
	dos n primeiros elementos */
	/* A diferença está na verificação que é feita
	através de um vetor do tipo bool */
	bool used[n];
	int i=0,random=0;
	while (i < n){
		random = randInt(0,n);
		if (!used[random]){
			used[random] = true;
			v[i] = random;
			++i;
		}
		else 
			random = randInt(0,n);
		}
}

void permut3(int *v, int n){
	/* Esta função é responsavel por misturar,
	isto é, permutar os elementos entre si */
    for (int i = 1; i < n; i++)
        swap(v[i], v[randInt(0,i)]);
}

int main (){
	/* Esta é a função principal do programa */
		int v1[10],v2[10],v3[10];
		int n=10;

		/* Algoritimo de Permutação 1 */
		permut1(v1,n);
			printv(v1,n);
		/* Algoritimo de Permutação 2 */
		permut2(v2,n);
			printv(v2,n);
		/* Algoritimo de Permutação 3 */
		permut3(v3,n);
			printv(v3,n);
			
}