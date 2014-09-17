#include <iostream>
#include <math.h>
using std::cout;
using std::endl;

typedef struct {
	int left;
	int right;
} realtype;

realtype* create_real(float number,int digs){
	int precisao = pow (10,digs);
	float r = number - (int)number;

	realtype *newreal = new realtype;

	newreal->left = number;
	newreal->right = (number - (int)number)*precisao;

	return newreal;
}

float return_real(realtype* real,int digs){
	int precisao = pow(10,digs);
	float Really_Real=0;
	Really_Real += real->left;
	Really_Real += (float)(real->right)/precisao;
	return Really_Real;	
}

int main (){
	realtype* F1; realtype* F2;
	F1 = create_real(1.554,3);
	F2 = create_real(5.9875,4);
	cout << F1->left << "." << F1-> right << " " << endl;

	float FloatF1,FloatF2;	
	FloatF1 = return_real(F1,3);

	cout << FloatF1 << endl;

}