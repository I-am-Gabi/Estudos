//ALUNO: ROBERTO ANRAFELL ARAUJO DANTAS - 2014027940

#include "01deque.h"

int escolha(void){
	int escolha;
	cin >> escolha;
}

void opcoes(void){
	cout << endl;
	cout << "(1) Inserir INICIO";
	cout << "\t(3) Retirar INICIO" << endl;
		cout << "(2) Inserir FIM";
		cout << "\t\t(4) Retirar FIM" << endl;
	cout << "(5) Listar deque";
		cout << "\t(6) Remover todos" << endl;
	cout << "\t\t\t(7) Fim execução" << endl;
}

void menu(void){
	lista<float> l1;
	l1.begin = NULL;
	l1.end = NULL;
	bool fim = false;
	int escolha;
	float valor;

	while (!fim){
		opcoes();
		cin >> escolha;
		switch (escolha){
			case 1: { 
				cin >> valor;
				insere::Inicio(l1,new float (valor));
				break;
			}
			case 2: {
				cin >> valor;
				insere::Fim(l1,new float (valor));	
				break;		
			}
			case 3: {
				retira::Inicio(l1);
				break;
			}
			case 4: {
				retira::Fim(l1);
				break;
			}
			case 5: {
				listar(l1);
				break;
			}
			case 6: {
				retira::Todos(l1);
				break;
			}
			case 7:{
				fim = true;	
				return;
			}

		}
	}
}
