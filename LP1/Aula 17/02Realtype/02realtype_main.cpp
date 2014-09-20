//ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940

#include "02realtype.h"

int main (){
	/* Declarações variáveis */
	realtype* F1; realtype* F2; realtype* OPERACAO;

	/* LETRA A: Cria dois números do tipo realtype */
	F1 = create_realtype(1.554,3);
	F2 = create_realtype(5.9875,4);
	/* LETRA B: Converte de realtype para float */
	float returnF1 = return_to_float(F1,3);
	float returnF2 = return_to_float(F2,4);
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
}