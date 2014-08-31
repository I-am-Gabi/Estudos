#include <iostream>

using namespace std;

void imprime_v(int vet[], int l,int r){
	cout << endl;
	for (; l < r; ++l){
		cout << vet[l] << " ";		
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

int Quick(int v[], int left, int right) {  
  int l, r, x, aux;
  if (left < right) {
      x = v[(left+right)/2]; 
  		cout << "| pivo= " << x << " |";      
      l = left; 
      r = right;
    while (l <= r){  
      while (v[l] < x) l++;
      while (x < v[r]) r--;
      cout << " de " << l << " ate " << r; 
      if (l <= r) { 
      	cout << " TROCA DE v[" << l << "]";
        cout << " COM v[" << r << "]" << endl;
        aux = v[l];
        v[l] = v[r];
        v[r] = aux;
        l++, r--;
          imprime_v(v,0,10);
      }
    }    

    Quick(v, left, r);
    Quick(v, l, right);
  } 
  return 0;
} 

int main (){
	

int v1[] = {105,5,90,3,40,13,30,10,21,25};
imprime_v(v1,0,10);
Quick(v1,0,9);
imprime_v(v1,0,10);

}