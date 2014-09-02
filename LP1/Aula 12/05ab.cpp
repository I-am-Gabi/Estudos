#include <iostream>
using namespace std;
void imprime_v(char *v, int n){
	cout << endl;
	for (int i=0; i < n; ++i){
		cout << v[i] << " ";		
	}
}

char func(char v[], int n){
	int l = 0;
	int r = n;

	while (l < r){
		while (v[l] != 'b') ++l;
		while (v[r] != 'a') --r;
		std::swap(v[l],v[r]);
	}

	std::swap(v[l], v[r]);


}


int main (){
	

	char v[10] = {'a','b','b','b','a','b','a','b','a','a'};
	imprime_v(v,10);
	func (v,10);
	imprime_v(v,10);

}