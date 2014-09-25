//ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940
#include "06aviao.h"

int main (void){

lista<aviao> l;
l.begin = NULL;
l.end = NULL;
l.size = 0;

adiciona_aviao(l,add_aviao("Boeing 777","Holanda","China","MH370","Malaysia Airlines"));
adiciona_aviao(l,add_aviao("Boeing 767-223ER","Boston","Los Angeles","11","American Airlines"));
adiciona_aviao(l,add_aviao("Boeing 767-222","Boston","Los Angeles","175","American Airlines"));
adiciona_aviao(l,add_aviao("Boeing 757-223","Washington","Los Angeles","77","American Airlines"));

avioes_em_espera(l);

imprime_lista_espera(l);

caracteristicas_primeiro_fila(l.begin);

libera_voo(l);

}

