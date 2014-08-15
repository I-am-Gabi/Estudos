//ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940

#include <iostream>

int g(int n){
	//Função que retorna o dobro de n;
	return n * 2;	
}

int soma(int (*f)(int), int inicio, int fim){

	for (int i=inicio; i < fim; ++i){
		std:: cout << f(i) << std::endl;
	}

}


int main (){
	
soma(g, 1, 10);

}