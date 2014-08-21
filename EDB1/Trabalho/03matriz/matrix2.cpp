#include <iostream>
#include <stdio.h>

using namespace std;
int findInMatrix(int x, int n, int v[4][4]){

int menor=0,maior=0,i=0;
int flagmaior=0;
for (int i=0; i < n; ++i){
	if (v[i][i] == x){
		return 1;
	}
	else if (v[i][i] < x){
		menor = i;	
	}
	else if (v[i][i] > x && flagmaior == 0){
		maior = i;
		flagmaior = 1;	
	}
}

for (int i=menor; i <= maior; ++i){
	for (int j=menor; j <= maior+1; ++j){
		if (v[i][j] == x){
			cout << "ACHOU " << x << " em " << i << j << endl;
			return 1;
		}
		//cout << " " << i << "" << j;
	}
	//cout << endl;
}


}

int main (){
	int valor = 5;
	int matrix[4][4] = {{1,2,3,4},{10,20,30,40},{100,200,300,400},{1000,2000,3000,4000}};
	
	findInMatrix(400,4,matrix);
		findInMatrix(30,4,matrix);
			findInMatrix(40,4,matrix);
				findInMatrix(300,4,matrix);

}