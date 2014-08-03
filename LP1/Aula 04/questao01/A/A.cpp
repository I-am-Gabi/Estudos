#include <iostream>
#include "A_lib.h"

int main () {

int posicao;

int vetor[6] = {4,7,10,18,23};
posicao = buscar (vetor, 6, 23);
std::cout << posicao << std::endl;
return 0;

}