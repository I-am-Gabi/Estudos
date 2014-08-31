(01) algoritmo mergesort aux(ref A, l, r)
(02) 	se l < r entao
(03) 		m ← (l+r)/2
(04)		mergesort aux(A, l, m)
(05) 		mergesort aux(A, m + 1, r)
(06) 		intercale(A, l, m, r)
(07) 	fimse
(08) fimalgoritmo

HIP: Sabemos ordenar um conjunto de 1 ≤ k < n inteiros.

Caso base: n = 1. Um conjunto de um unico elemento está
ordenado.

Passo Indutivo: Seja S um conjunto de n ≥ 2 inteiros. Podemos 
particionar S em dois conjuntos, S1 e S2, de tamanhos ⌊n/2⌋ e 
⌈n/2⌉. Como n ≥ 2, ambos S1 e S2 possuem menos de n elementos.
Por hipótese de indução, sabemos ordenar os conjuntos S1 e S2.
Podemos então obter S ordenado intercalando os conjuntos ordenados
S1 e S2.