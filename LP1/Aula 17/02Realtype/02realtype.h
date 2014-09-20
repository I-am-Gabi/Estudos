//ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940

#ifndef _REALTYPE_
#define _REALTYPE_

#include <iostream>
#include <stdlib.h>
#include <math.h>

typedef struct {
	int left;
	int right;
} realtype;

float add(float f1, float f2);
float substract(float f1, float f2);
float multiply(float f1, float f2);

void delete_realtype(realtype * real);
void imprime_realtype(realtype * F);
void imprime_float (float F1);

float return_to_float(realtype* real,int digs);
realtype* create_realtype(float number,int digs);
realtype* operacao_realtype(float (*f) (float,float),realtype *R1, int d1, realtype *R2, int d2);

using std::cout;
using std::endl;

#endif