#include <iostream>
#include <stdlib.h>
#include <math.h>
 using std::cout;
 using std::endl;

float add(float f1, float f2) {return f1+f2;}
float substract(float f1, float f2) {return f1-f2;}
float multiply(float f1, float f2) {return f1*f2;}

typedef struct {
	int left;
	int right;
} realtype;

void delete_realtype(realtype * real){delete(real);}

void imprime_realtype(realtype * F){
	cout << "Left = "<< F->left << "; Right = " << 
			F-> right << "; ";
	cout << " Result =  " << F->left << "." << F->right << endl;
}

void imprime_float (float F1){
	cout << "Valor retornado = " << F1 << " " << endl;
}

float return_to_float(realtype* real,int digs){
	/* Essa função recebe um ponteiro do tipo 
	realtype {int left, int right} e retorna
	um valor único do tipo float; */
	int precisao = pow(10,digs);
	float return_float=0;
	return_float += real->left;
	return_float += (float)(real->right)/precisao;
	return return_float;	
}

realtype* create_realtype(float number,int digs){
	/* Essa função recebe um valor float e quantidade 
	de digitos fracionários e retorna um ponteiro
	do tipo realtype {int left, int right}; */
	int precisao = pow (10,digs);
	float r = number - (int)number;

	realtype *newreal = new realtype;

	newreal->left = number;
	newreal->right = labs((number - (int)number)*precisao);

	return newreal;
}

realtype* operacao_realtype(float (*f) (float,float),realtype *R1, int d1, realtype *R2, int d2){
	realtype* R3; float fR1, fR2, result;int dmax;
	dmax = std::max(d1,d2) + 1;
	fR1 = return_to_float(R1,d1);
	fR2 = return_to_float(R2,d2);
	result = f(fR1,fR2);
	R3 = create_realtype(result,dmax);
	return R3;
}

int main (){
	/* Declarações variáveis */
	realtype* F1; realtype* F2; realtype* OPERACAO;
	float returnF1,returnF2;	

	/* LETRA A: Cria dois números do tipo realtype */
	F1 = create_realtype(1.554,3);
	F2 = create_realtype(5.9875,4);
	/* LETRA B: Converte de realtype para float */
	returnF1 = return_to_float(F1,3);
	returnF2 = return_to_float(F2,4);
	/* Imprime os valores */
	imprime_realtype(F1);
	imprime_realtype(F2);
	imprime_float(returnF1);
	imprime_float(returnF2);
	/* LETRA C: Realiza operações de add, substract, e multiply */
	OPERACAO = operacao_realtype(add,F1,3,F2,4);
				imprime_realtype(OPERACAO);
				delete_realtype(OPERACAO);

	OPERACAO = operacao_realtype(substract,F1,3,F2,4);
				imprime_realtype(OPERACAO);
				delete_realtype(OPERACAO);

	OPERACAO = operacao_realtype(multiply,F1,3,F2,4);
				imprime_realtype(OPERACAO);
				delete_realtype(OPERACAO);


	/* Delete o espaço alocado para realtype */
	delete_realtype(F1);
	delete_realtype(F2);
	

	//cout << 1.554 * 5.9875 << endl;







}