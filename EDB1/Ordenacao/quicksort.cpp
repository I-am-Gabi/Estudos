#include <iostream>

using namespace std;

void imprime_v(int vet[], int n){
	cout << endl;
	for (int i=0; i < n; ++i){
		cout << vet[i] << " ";		
	}
}

int particao( int v[], int l, int r){
	int x = v[r];
	int i = l-1;
	int aux; //x é o pivô
	for(int j = l; j < r-1 ; j++ ){
		if( v[j] < x ){ //tudo q está antes do i é menor q o pivô 
			i++; //se for preciso trocar então ele aumenta o valor de i e passa o valor maior pra frente do pivô 
			swap(v[i],v[j]);
		}
	}
	swap(v[i+1],v[r]);
	return i+1; //retorna a posição do pivô 
}

void quicksort_aux( int v[], int l, int r){
	int q;
	if( r > l ){
		q = particao(v, l, r); //q possui o indice do pivô
		quicksort_aux(v,l,(q-1));
		quicksort_aux(v,(q+1),r);
	}
}

void quicksort(int v[], int n){
	quicksort_aux(v,0,n);
} 

int main (){
	

int v1[] = {98,5,40,3,99,1,100,3};
imprime_v(v1,8);
quicksort(v1,7);
imprime_v(v1,8);

}