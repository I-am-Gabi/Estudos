//ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940

#include "06aviao.h"

aviao* add_aviao(string name,string origin,string destiny, string id, string model){
    aviao* newjet = new aviao;
    newjet->nome = name;
    newjet->origem = origin;
    newjet->destino = destiny;
    newjet->ID = id;
    newjet->modelo = model;
    return newjet;
}