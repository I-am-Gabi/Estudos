#include <iostream>

bool busca (int *v, int size, int valor){

	if (size == 0){
		return false;
	}
	else if (*v == valor){
		return true;
	}
	size--;
	busca (v+1, size, valor);
}