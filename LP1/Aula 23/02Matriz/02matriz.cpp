//ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940

#include "02matriz.h"

matrizcl::matrizcl(int n, int m){
    linhas = n;
    colunas = m;
}

void matrizcl::cria(){
    int i,p;

    int **matriz;
    matriz = new int*[linhas]; //aloca as linhas
    for (i=0; i < colunas; ++i){
        matriz[i] = new int[colunas]; // aloca as colunas
    }

    for (i=0; i < linhas; ++i){
        for (p=0; p < colunas; ++p){
            matriz[i][p] = 0;
        }
    }
    mainmat = matriz;
}

void matrizcl::matdelete(){
    int i,p;
    for (i=0; i < linhas; ++i){
            delete[](mainmat[i]);
    }
    delete(mainmat);
    mainmat = NULL;
}

void matrizcl::imprime(){
    cout << "=================" << endl;
    if (mainmat != NULL){
        for (int i=0; i < linhas; ++i){
            for (int p=0; p < colunas; ++p){
                cout << mainmat[i][p] << " ";
            }
        cout << endl;
        }
    }
    else { cout << " Matriz Vazia " << endl;}
     cout << "=================" << endl;
}

void matrizcl::acessa(int n, int m){
    if (n < linhas && m < colunas){
    cout << mainmat[n][m]<< endl;
    }
    else { cout << " tamanho invalido " << endl;}
}

void matrizcl::atribui(int i, int p,int number){
    if (mainmat != NULL){
    mainmat[i][p] = number;}
    else {
        cout << "<- Segmentation Fault ->" << endl;
    }
}

void matrizcl::qlinhas(){
    cout << " linhas : " << linhas << endl;
}
void matrizcl::qcolunas(){
    cout << " colunas : " << colunas << endl;
}

