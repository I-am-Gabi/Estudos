#include <iostream>
#include "buscalib.h"

int main (){

int array[13] = {10,20,30,40,50,60,70,80,90,100,110,120,130};
std::cout << BinSearch(array,1,13,80) << std::endl;	

}