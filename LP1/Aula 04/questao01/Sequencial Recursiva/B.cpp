#include <iostream>
#include "B_lib.h"

int main () {

int posicao;

int vetor[5] = {1,2,3,4,5};
posicao = busca(vetor, 5, 4);
std::cout << posicao << std::endl;
return 0;

}