(01) algoritmo quicksort aux(ref A, l, r)
(02) 	se l < r então
(03) 		q ← partição(A, l, r)
(04) 		quicksort aux(A, l, q − 1)
(05) 		quicksort aux(A, q + 1, r)
(06) 	fimse
(07) fimalgoritmo

Sabemos ordenar um conjunto de 1 ≤ k < n inteiros.

Caso base: n = 1. Um conjunto de um unico ´ elemento est´a
ordenado.

Passo da Indução: Seja S um~conjunto de n ≥ 2 inteiros e x um
elemento qualquer de S. Sejam S1 e S2 os subconjuntos de S − x
dos elementos menores ou iguais a x e maiores que x,
respectivamente. Ambos S1 e S2 possuem menos de n elementos. 
Por hipótese de indução, sabemos ordenar os conjuntos S1 e S2. 
Podemos obter S ordenado concatenando S1 ordenado, x e S2 ordenado.