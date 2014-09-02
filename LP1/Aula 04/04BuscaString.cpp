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

int main () {

std::string v[4] = {"ola","ola1","ola11","ola12"};

std::cout << buscar (v,0,3,"ola") << std::endl;
std::cout << buscar (v,0,3,"ola12") << std::endl;

return 0;

}