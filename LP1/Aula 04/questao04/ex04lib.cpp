#include <iostream>
#include <string>

int buscar (std::string v[], int start, int end, std::string x){
int mid;

	while (start <= end){
		mid = (start+end)/2;
		if (v[mid].compare(x) == 0){
			return mid;
		}
		else if (v[mid].compare(x) < 0){
			start = mid +1;
		}
		else if (v[mid].compare(x) > 0){
			end = mid - 1;
		}
	}
	return -1;
}