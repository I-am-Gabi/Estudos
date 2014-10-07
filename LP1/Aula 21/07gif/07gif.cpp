//ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940

#include "07gif.h"

int** inicializa_mat(void){
    int i,p;

    int **matriz;
    matriz = new int*[10]; //aloca as linhas
    for (i=0; i < 10; ++i){
        matriz[i] = new int[10]; // aloca as colunas
    }

    for (i=0; i < 10; ++i){
        for (p=0; p < 10; ++p){
            matriz[i][p] = 0;
        }
    }

    return matriz;
}

bool verifica_zerada(int **mat){
    int i,p;
    for (i=0; i < 10; ++i){
        for (p=0; p < 10; ++p){
            if (mat[i][p] != 0){
                return false;
            }
        }
    }
    return true;
}

int** mat_aleatoria(void){
	int randI,randJ,i,p,**matriz;
    srand(time(NULL));
    matriz = new int*[10]; //aloca as linhas
    for (i=0; i < 10; ++i){
        matriz[i] = new int[10]; // aloca as colunas
    }

    if (verifica_zerada(matriz)){
        randI = rand() % 10;
        randJ = rand() % 10;
        matriz[randI][randJ] = 1;
    }
    else {
        for (i=0; i < 10; ++i){
            for (p=0; p < 10; ++p){
                if (matriz[i][p] == 1){
                    if (matriz[i][(p+1)%10] == 0){
                        matriz[i][(p+1)%10] = 1;
                        return matriz;
                    }
                }
            }
        }
    }

    return matriz;



}