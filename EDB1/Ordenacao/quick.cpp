#include<iostream>

  using namespace std;

int particao( int v[], int inicio, int n ){
	int x = n-1, i = inicio-1, j, aux; //x é o pivô
	for( j = inicio; j < n-1 ; j++ ){
		if( v[j] < x ){ //tudo q está antes do i é menor q o pivô 
			i++; //se for preciso trocar então ele aumenta o valor de i e passa o valor maior pra frente do pivô 
			aux = v[i]; v[i] = v[j]; v[j] = aux;
		}
	}
	aux = v[i+1];
	v[i+1] = v[n-1];
	v[n-1] = aux;
	return i+1; //retorna a posição do pivô 
}

void quicksort( int v[], int n, int inicio ){
	int q;
	if( n > inicio ){b
		q = particao( v, inicio, n ); //q possui o indice do pivô
		particao( v, inicio, q - 1 );
		particao( v, q + 1, n );
	}
}


int quickSort(int v[], int left, int right) {  
  int l, r, x, aux;
  if (left < right) {
      x = v[(left+right)/2]; 
      l = left; 
      r = right;
    while (l <= r)
    {  
      while (v[l] < x) l++;
      while (x < v[r]) r--;
      if (l <= r) { 
        aux = v[l];
        v[l] = v[r];
        v[r] = aux;
        l++, r--;
      }
    }    
    quickSort(v, left, r);
    quickSort(v, l, right);
  } 
  return 0;
} 



int main(){
	int n, ini = 0;
	cin >> n;
	int v[n];
	for(int i = 0; i < n; i++)
		cin >> v[i];
	quicksort( v, n, ini );
	for(int i = 0; i < n; i++)
		cout << v[i] << " ";
	return 0;	
}