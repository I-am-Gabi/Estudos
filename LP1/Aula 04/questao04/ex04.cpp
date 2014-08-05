#include <iostream>
#include <string>
#include "ex04lib.h"

int main () {

std::string v[4] = {"ola","ola1","ola11","ola12"};

std::cout << buscar (v,0,3,"ola") << std::endl;
std::cout << buscar (v,0,3,"ola12") << std::endl;

return 0;

}