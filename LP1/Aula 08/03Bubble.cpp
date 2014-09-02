//ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940

/*  O Número de comparações do IF são iguais
tanto no passo Recursivo quanto no passo Iterativo.
Isto deve-se pelo fato da recursão neste algoritimo
específico funciona como um laço. */

/* Numero de comparações em Iterativo = 17
  Numero de comparações em Recursivo = 17
*/

#include <iostream> // PadraoC++
#include <sys/time.h> // time()

int contadorIterativo=0;
int contadorRecursivo=0;

void BubbleSortIterativa(int *v, int tam){

  for (int j=0; j < tam; ++j){
    for (int i=0; i < tam-1; ++i){
      if (v[i+1]<v[i]){
        ++contadorIterativo;
        int aux = v[i];
        v[i] = v[i+1];
        v[i+1] = aux;
      }  
    }
  }
}

void BubbleSortRecursiva(int *v,int tam){

if(tam > 0){
   for (int i=0; i < tam-1; ++i){
      if (v[i+1]<v[i]){
        ++contadorRecursivo;
        int aux = v[i];
        v[i] = v[i+1];
        v[i+1] = aux;
      }  
    }
  BubbleSortRecursiva(v, tam-1);
}

return ;

}

void imprimev(int *v, int tam){
	std::cout << std::endl;
	for (int i=0; i < tam; ++i){
		std::cout << v[i] << " ";
	}
}

int main (){

  int A[10] = {12,23,2,1,5,67,10,11,20,22};
  int A2[10] = {12,23,2,1,5,67,10,11,20,22};

  BubbleSortIterativa(A,10);
  imprimev(A,10);

  BubbleSortRecursiva(A2,10);
  imprimev(A2,10);

  std::cout << std::endl << "Iterativo = " << contadorIterativo << std::endl;
  std::cout << "Recursivo = " << contadorRecursivo << std::endl;

}