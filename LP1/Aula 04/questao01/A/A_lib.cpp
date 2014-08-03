#include <iostream>

int buscar (int *v, int size, int valor){

	int i;
	for (i = 0; i < size -1 ; ++i){
		if (v[i] == valor){
			return i;
		}		
	}
	return 0;
}