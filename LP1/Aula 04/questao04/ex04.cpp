#include <iostream>
#include <string>
#include "ex04lib.h"

int main () {
int pos;
std::string v[] = {"ola", "mundo", "testep", "aloupp"};
pos = buscar (v, 4, "ola");
std::cout << pos << std::endl;
pos = buscar (v, 4, "mundo");
std::cout << pos << std::endl;
pos = buscar (v, 4, "testep");
std::cout << pos << std::endl;
pos = buscar (v, 4, "aloupp");
std::cout << pos << std::endl;
pos = buscar (v, 4, "naoexiste");
std::cout << pos << std::endl;
return 0;

}