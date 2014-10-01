//ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940
#include "03palindromo.h"

int main (void){

lista<string> l1;
l1.begin = NULL;
l1.end = NULL;

push_back(l1,new string ("R"));
push_back(l1,new string ("A"));
push_back(l1,new string ("D"));
push_back(l1,new string ("A"));
push_back(l1,new string ("R"));
imprime(l1);
verifica(l1);

lista<string> l2;
l2.begin = NULL;
l2.end = NULL;

push_back(l2,new string ("R"));
push_back(l2,new string ("A"));
push_back(l2,new string ("D"));
push_back(l2,new string ("A"));
push_back(l2,new string ("E"));
imprime(l2);
verifica(l2);



}

