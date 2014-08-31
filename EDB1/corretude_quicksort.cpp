void quicksort_aux( int v[], int l, int r){
	int q;
	if( r > l ){
		q = particao(v, l, r); //q possui o indice do pivô
		quicksort_aux(v,l,(q-1));
		quicksort_aux(v,(q+1),r);
	}
}

void quicksort(int v[], int n){
	quicksort_aux(v,0,n);
} 

INVARIANTE:
	No final de cada execução do quicksort_aux, o pivô 
	escolhido estará na posição correta de ordenação.

CASO BASE:
	Para 0 elementos, temos 0 elementos na posição correta
	ou posição final.
PASSO INDUTIVO:
	A cada i-ésima iteração da função quicksort_aux temos
	i elementos na posição correta. Para i-ésima + 1 temos
	i + 1 elementos na posição correta.

	O laço recursivo acaba quando r > l, onde r é incrementado a
	cada execução e o valor de r decrementado a cada execução. 














INVARIANTE :
	A cada execução terá um subvetor com elementos
	menores que "q" e outro subvetor com elementos
	maiores que "q". onde "q" ∈ {l...r} ⊆ {1,...,n}; 

Invariante - 1 tentativa: 

A cada execução do quicksort_aux, 
é gerado um valor "q" ∈ {l...r} ⊆ {1,...,n} e
o vetor será dividido em duas partes 
tal que para todo A[i] ≤ A[q] e A[q] ≤ A[j] onde

i ∈ {1,...,q-1}
j ∈ {q+1,...,r}