//ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940
#include "listalib.h"

int main (void){

lista<int> l;

list::inicializa(l);
list::push_back(l,new int(01));
list::push_back(l,new int (02));
list::push_front(l,new int (10));
list::push_front(l,new int (20));
list::cout(l);

}

