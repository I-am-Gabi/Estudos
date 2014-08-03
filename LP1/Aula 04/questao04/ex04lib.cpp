#include <iostream>
#include <string>

int buscar (std::string v[], int size, std::string x){

	int i;
	for (i = 0; i < size; ++i){
		if (v[i].compare(x) == 0){
			return i;
		}
		else if(v[i].compare(x) > 0){
			return -1;
		}		
	}
	return -1;
}