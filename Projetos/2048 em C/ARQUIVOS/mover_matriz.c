#include <stdio.h>
#include "escrita_arquivos.h"
#include "mover_matriz.h"

void girar_mat(int mat[4][4]) {/* a função rotaciona a matriz para utilizar apenas uma movimentação(para cima) dos conteúdos existentes*/
	int i,j,n=4;
	int tmp;
	for (i=0; i<n/2; i++){			/* A partir desse ponto a função estabelece sucessivas mudanças na porsição do conteúdo 
	para que ele movimente no sentido ANTI-Horário, até o ponto estabelecido como "END"*/
		for (j=i; j<n-i-1; j++){
			tmp = mat[i][j];
			mat[i][j] = mat[j][n-i-1];
			mat[j][n-i-1] = mat[n-i-1][n-j-1];
			mat[n-i-1][n-j-1] = mat[n-j-1][i];
			mat[n-j-1][i] = tmp;			//END;
		}
	}
}

void somaUPDOWN (int matriz[4][4]){
/*Subrotina para somar os números que estão juntos
de cima para baixo */

	int linha,coluna;

		for (linha = 0; linha <= 3; ++linha){

			for (coluna = 0; coluna <= 3; ++coluna){

				if (matriz[linha+1][coluna] == matriz[linha][coluna]) {
					/* Se o de baixo for igual de cima */
					matriz[linha][coluna] = matriz[linha+1][coluna] * 2;
					/* o de cima recebe valor de baixo multiplicado por 2 */
					if (matriz[linha][coluna] == 2048){
						venceu = 1;
					}
					scoreglobal += matriz[linha][coluna];
					scorebest = ler_best();
					salvar_score(scoreglobal);
					if (scoreglobal > scorebest){
						salvar_score_best(scoreglobal);
					}
					matriz[linha+1][coluna] = 0;
					/* o de baixo fica com valor 0 */
				}


		}
	}

}

void matUP(int matriz[4][4]){

	int linha,coluna;
	int vezes;

for (vezes=3; vezes > 0 ; --vezes){
	for (linha = 0; linha <= 3; ++linha){
		for (coluna = 0; coluna <= 3; ++coluna){

			if (matriz[linha][coluna] == 0 && linha+1 <= 3){
				/*Se o elemento é igual a 0 */
				matriz[linha][coluna] = matriz[linha+1][coluna];
				/*o elemento recebe o próximo da coluna */
				matriz[linha+1][coluna] = 0;
				/*o próximo da coluna fica com 0 */
			}


		}
	}
}

}

void moveUP (int matriz[4][4]){
	matUP (matriz);
	/* Chama subrotina para subir os elementos da matriz */
	somaUPDOWN (matriz);
	/* Soma os elementos */
	matUP (matriz);
	/* Sobe novamente */


}
