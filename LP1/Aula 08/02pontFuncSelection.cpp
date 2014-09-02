//ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940

#include <iostream>

int compDecrescente(int a, int b){ return a-b; }
int compCrescente(int a, int b){ return b-a; }


void selection_sort(int *num, int tam, int (*f) (int,int)){ 
	int i, j, min, aux;
	for (i = 0; i < (tam-1); i++) {
   		 min = i;
    	for (j = (i+1); j < tam; j++) {
     		if(f(num[j],num[min]) > 0) {
       		min = j;
      	}
    }

    if (i != min) {
    	aux = num[i];
    	num[i] = num[min];
    	num[min] = aux;
    }
  }
}

void imprimev(int *v, int tam){
	std::cout << std::endl;
	for (int i=0; i < tam; ++i){
		std::cout << v[i] << " ";
	}
}

int main (){
	
int v[6] = {5,9,4,12,3,7};

selection_sort(v,6,compCrescente);
imprimev(v,6);

selection_sort(v,6,compDecrescente);
imprimev(v,6);

}