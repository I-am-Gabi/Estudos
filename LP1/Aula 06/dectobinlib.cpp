#include <iostream>
#include "dectobinlib.h"

int DecToBin(int a){
	std::cout << a % 2;
	if (a == 0)
		return 0;
	else 
		DecToBin (a/2);
}