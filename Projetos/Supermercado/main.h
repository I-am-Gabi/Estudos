#ifndef _LISTA_GENERICA_
#define _LISTA_GENERICA_

#include <iostream> // Biblioteca Padrão do C++ para funções de arquivo
#include <fstream> // Biblioteca para entrada/saída de arquivos 
#include <cstdlib> // Biblioteca para srand e rand
#include <sstream> // Biblioteca para streamstring
#include <string>
#include <algorithm> // for copy
#include <iterator> // for ostream_iterator
#include <vector>

using std::stringstream;
using std::cout;
using std::endl;
using std::string;

template <class T>
struct node { // Nó da lista genérica
	node<T> * next; // Ponteiro para o proximo da lista
	T* data; // Ponteiro para conteudo do tipo T
}; 

class Cliente{ // Classe Cliente
private:
    int ID; // ID do cliente
public:
    int horaChegada; // hora emq ue o cliente chega na fila
    int tempoFila;  // tempo que vai passando desde que ele chegou na fila
    int timeAtendimento; // tempo que ele vai ser atendido
    Cliente(int _id, int _horaChegada = 0, int _tempoFila = 0, int _timeAtendimento = 0) { // Construtor da classe cliente
        ID = _id; // Insere o ID
        horaChegada = _horaChegada; // Insere a hora de chegada
        timeAtendimento = _timeAtendimento; // Insere qual será o tempo de atendimento
    }
    void coutdados(){ // imprime os dados do Cliente
        std::cout << " " << ID << " HorarioChegada = " << horaChegada << " TempoAtendimento = " << timeAtendimento << std::endl; // saída padrão
    }
};

template <class T>
class list{ // Classe genérica de lista
private:
	node<T>* begin; // Ponteiro para inicio da lista
	node<T>* end;  // Ponteiro para fim da lista
    int type;   // 1 = fila, 2 = pilha, 3 = lista
	int sizeoflist; // tamanho da lista
private:
    void pushtop(T* toadd){ /* adiciona elemento no topo */
        node<T> * newnode = new node<T>; // aloca novo nó da lista
        newnode->data = toadd; // armazena endereço do conteúdo do tipo T
        newnode->next = begin; // o próximo passa a ser a lista
        begin = newnode; // inicio da lista passa a ser o novo nó
        if (end == NULL){ // se final == nulo
            end = newnode;  // final passa a ser o novo nó
        }
        sizeoflist += 1; // aumenta tamanho da lista
    }
    void pushend(T* toadd){ /* adiciona elemento no final */
        node<T>* newnode = new node<T>; // aloca novo nó
        newnode->data = toadd; // armazena endereço do conteúdo do tipo T
        newnode->next = NULL; // o próximo passa a ser a lista
        if (begin == NULL){ // se a lista for vazia
            begin = newnode; // inicio passa a ser novo nó
            end = newnode; // final passa a ser o novo nó
        }
        else { // se não for vazia
            (end->next) = newnode; // próximo do final passa a ser novo nó
            end = end->next; // o final passa a ser o novo nó
        }
        sizeoflist += 1; // aumenta tamanho da lista 
    }
    void pushpos(T* toadd, int pos){ /* adiciona elemento na posição indicada */
        node<T> * newnode = new node<T>;
        newnode->data = toadd;
        if (begin != NULL){ // se a lista não for vazia
            node<T> * p = begin; // auxiliar para percorrer lista
            node<T> * ant = begin; // auxiliar para percorrer lista
            for (int i=0; i < pos; ++i,ant = p,p=p->next); // percorre até final da lista
            if (ant != p){ //se ant != p, então é no meio da lista
                ant->next = newnode; // próximo do anterior passa a ser novo nó 
                newnode->next = p; // próximo do novo nó passa a ser o atual
            }
            else{ 
                /* Quando penultimo == ultimo a posição
                é 0, ou seja, é para adicionar no topo da lista */ 
                newnode->next = p; // próximo do novo nó é a lista 
                begin = newnode; // inicio passa a ser o novo nó
            }
        }
        else { // Se a lista for nula = vazia
            begin = newnode; // inicio passa a ser novo nó
            end = newnode; // fim passa a ser novo nó
            sizeoflist = 1; // tamanho da lista passa a ser 1
        }
    }
    void poppos(int pos){ /* remove elemento da posição indicada */
        node<T> * p = begin; // auxiliar para percorrer lista
        node<T> * ant = begin; // auxiliar para percorrer lista
        for (int i=0; i < pos; ++i,ant = p,p=p->next); // percorre até penultimo e ultimo
            if (ant != p) { //Se for diferente, está no meio da lista
                ant->next = p->next; // faz uma ponte entre o elemento p
                delete(p); // remove o elemento p
            }
            else { // Caso não, então pos = 0. remover o primeiro
                begin = p->next; // inicio passa a ser o próximo da lista
                delete(p); // remove o primeiro
            }
    }
    void poptop(){ /* remove elemento do topo */
        if (begin != NULL){ // se a lista não for vazia
            node<T> * aux = begin; // auxiliar para salvar posição a ser deletada
            if (begin->next != NULL){
                begin = begin->next; // inicio passa a ser o próximo
            }
            delete(aux); // deleta o primeiro
            sizeoflist -= 1; // diminui tamanho da lista
        }
    }
    void popend(){ /* remove elemento do final da lista */
        if (end != NULL){ // se final for diferente de nulo
            node<T> * aux = begin; // variavel auxiliar para percorrer
            while (aux->next != NULL && aux->next != end){ 
                aux = aux->next; } //percorre até penultimo elemento
            if (aux != end){ // Se penultimo é diferente do ultimo
                delete(end); // remove o ultimo
                aux->next = NULL; // o proximo do penultimo passa a ser nulo
                end = aux; // final da lista passa a ser o penultimo
                sizeoflist -= 1; // diminui o tamanho da lista
            }
            else { // então inicio == final,ou seja, a lista só tem 1 elemento
                delete(end); // deleta o final
                begin = NULL; // inicio passa a ser nulo
                end = NULL; // final passa a ser nulo
                sizeoflist = 0; // tamanho da lista passa a ser 0
            }
        }
    }
public:
	list(){ begin = NULL; end = NULL; sizeoflist = 0;} //construtor padrão da lista
    list(int x) { begin = NULL; end = NULL; sizeoflist = 0; type = x % 4;}  // construtor com tipo de lista
    int size() {return sizeoflist;}// retorna tamanho da lista
public:
    void push(T* toadd){ /* função para adicionar elemento na lista */
        switch (type) { // verifica qual tipo da lista
            case 1: pushend(toadd);break;// se for fila = adiciona no fim
            case 2: pushtop(toadd);break;// se for pilha = adiciona no inicio
            default:pushend(toadd);break;// padrao adiciona no final
        }
    }
    bool push(T* toadd, int pos){ /* sobrecarga para adicionar em uma posição especifica */
        if (pos <= sizeoflist){pushpos(toadd,pos);}// Se 0 < pos < tamanho da lista
        else {std::cout << " ERROR: Posição inserção" << pos << " invalida " << std::endl; return false;}
    }
    void pop(){ /* função para remover elemento da lista */
        switch (type) { // verifica qual tipo de lista
            case 1: poptop();break; // se for fila = remove no inicio
            case 2: poptop();break; // se for pilha = remove no inicio
            default: poptop();break; // padrão remove no inicio
        }
    }
    bool pop(int pos){ /* sobrecarga para remover em uma posição especifica */
        if (pos < sizeoflist){poppos(pos);}// Se 0 < pos < tamanho da lista
        else {std::cout << " ERROR: Posição remoção" << pos << " invalida " << std::endl; return false;}
    }
    T* showpos(int pos){ /* mostra conteudo da posição específica */
        node<T> * p = begin; // nó auxiliar para percorrer a lista
        int i = 0; // contador de posição
        pos = pos % sizeoflist; /* Evita que o valor seja maior que a lista */
        if (begin != NULL && pos < sizeoflist){ // se não for vazia e posição for menor que tamanho da lista
            while (p != NULL && i < pos){ //percorre até posição i
                ++i; // incrementa o i
                p = p->next; // avança para o próximo da lista
            }
        return (p->data); /* Retorna endereço do conteúdo da posição */
        }

        else {} /* Retorna nulo */
    }
    node <T>* search(T element){ /* procura por um elemento na lista */
        node<T> * p; // variavel auxiliar para percorrer lista
        if (begin != NULL){ // se lista não for nula
            for (p = begin; p != NULL; p = p->next){ //vai avançando a lista
                if ((*(p->data))->hora == element){ return p; } // se encontrar retorna o nó do elemento procurado
            }
        }
        return NULL; // lista nula ou não possui elemento, retorna NULL
    }
    node<T> * showtop() {return begin;} 
	void coutlist(){ /* imprime a lista na saída padrão */
 		node<T>* p; // variavel auxiliar para percorrer a lista
		std::cout << "[" << sizeoflist << "] "; // imprime tamanho da lista
		if (begin != NULL){ // se não for nula
			for (p = begin; p != NULL; p = p->next){ //vai avançado na lista
				std::cout << *(p->data) << " "; // imprime o conteúdo da lista
			}
		}
		std::cout << endl; // pula a linha
	}
    void coutclientes(){ /* imprime lista de clientes na saída padrão */
        node<T>* p; // variavel auxiliar para percorrer a lista
        std::cout << "[" << sizeoflist << "] Clientes" << std::endl; // imprime o tamanho da lista
        if (begin != NULL){ // se a lista não for vazia
            for (p = begin; p != NULL; p = p->next){ // percorre a lista
                (p->data)->coutdados();
            }
        }
        std::cout << endl; // pula a linha
    }
    void coutsupermercado(){ /* imprime a lista de caixas na saída padrão */
        node<T>* p; // variavel auxiliar para percorrer a lista 
        std::cout << "[" << sizeoflist << "] Caixas Abertos" << std::endl; // imprime o tamanho da lista
        if (begin != NULL){ // se a lista não for vazia
            for (p = begin; p != NULL; p = p->next){ // percorre a lista
                 (p->data)->coutcaixa(); // imprime a lista de clientes do caixa
            }
        }
        std::cout << endl; // pula a linha
    } 
    void couthorario(){
        node<T>* p; // variavel auxiliar para percorrer a lista 
        std::cout << "[" << sizeoflist << "] Horarios" << std::endl; // imprime o tamanho da lista
        if (begin != NULL){ // se a lista não for vazia
            for (p = begin; p != NULL; p = p->next){ // percorre a lista
                std::cout << (p->data)->hora << " " << (p->data)->InterInicio << " " << (p->data)->InterFinal << std::endl; // imprime a lista de clientes do caixa
            }
        }
        std::cout << endl; // pula a linha
    } 
    bool isEmpty(){ /* Verifica se a lista é vazia */
        if (begin != NULL){return false;} // se a lista não for vazia retorna falso
        else {return true;} // se for vazia retorna verdadeiro
    }  
};

class caixa { // Classe Caixa
private:
    int caixaID; // ID do Caixa
    list<Cliente>clientes; // lista de clientes do caixa
public:
    caixa(int num) : clientes(1) { caixaID = num;} // Construtor do caixa
    Cliente * aux; // auxiliar para receber novo cliente
    void addcliente(int ID, int _horaChegada = 0, int _tempoFila = 0){ /* Func. para adicionar cliente na lista */
        aux = new Cliente(ID,_horaChegada, _tempoFila); // Aloca cliente
        clientes.push(aux); // insere na lista
    } 
    void removecliente() {if (clientes.size() != 0){clientes.pop();}} 
    void coutcaixa(){ /* Func. para imprimir a lista do caixa */
        std::cout << "===== CAIXA " << caixaID << " ====="<< std::endl; // caixa numero
        clientes.coutclientes(); // imprime clientes do caixa 
    }   
    int size() {return clientes.size();} 
};

class supermercado { // Classe Supermercado
private:
    list<caixa>caixas_abertos; //lista de caixas
public:
    caixa * menorcaixa = NULL; // menor caixa no inicio é'nulo'
    supermercado() : caixas_abertos() {} // Construtor do supermercado
    void addcaixa(caixa *ctoadd){ // Func. para adicionar um caixa
        caixas_abertos.push(ctoadd); // insere na lista de caixas
        if (menorcaixa == NULL){ menorcaixa = ctoadd; }
        else { 
            if(ctoadd->size() < menorcaixa->size()) {
            menorcaixa = ctoadd;
            }
        }
    }
    void cout(){ // Func. para imprimir lista de caixas 
       caixas_abertos.coutsupermercado(); // imprime os caixas abertos
    } 
    bool returnCaixas(){
        return caixas_abertos.isEmpty();
    }  
    void coutmenor() {menorcaixa->coutcaixa();} 
};


class gerenciador { 

struct horario{
        int hora;
        int InterInicio;
        int InterFinal;
};

public:
    int tempomaximo; // tempo máximo de espera em uma fila
    int velAtenMax;  // vel. maxima de atendimento de cada caixa
    int velAtenMin;  // vel. minima de atendimento de cada caixa
    list<horario> listhorarios; //fila de horarios - adicionado no fim
    horario * horarioaux = NULL; //vai armazenando os valores do arquivo
    //std::vector<int>horarios;  // a partir desses horários
    //std::vector<int>intervaloInicial;  // chega um cliente entre intervaloInicial 
    //std::vector<int>intervaloFinal;  // e intervaloFinal

public:
    gerenciador() {tempomaximo = 0;velAtenMin = 0;velAtenMax = 0;} //Construtor para a classe Gerenciador
    int randTime(int a, int b) {int valor = a + rand() % b;}
    int lerDoc(){  
        int cont = 0; int cont_horarios = 0; 
        int cont_intervaloInicio=0,cont_intervaloFinal=0; 
        std::ifstream arq; // variável para armazenar as informações do arquivo de especificações
        string str; // string que irá armazenar cada valor do arquivo
        arq.open("especificacoes.txt"); // abro arquivo especificacoes.txt
		if (arq.is_open() && arq.good()){    
            while ( !arq.eof() ){ // fim do arquivo
                arq >> str; 
                try {  
                    if (cont == 0) tempomaximo = stoi(str);   
                    else if (cont == 1) {velAtenMin = stoi(str);}
                    else if (cont == 2) {velAtenMax = stoi(str);}
                    else if ((cont % 3) == 0) {
                        horarioaux = new horario; // inicializa novo horario
                        horarioaux->hora = (stoi(str))*3600; 
                        listhorarios.push(horarioaux);// salva a hora em segundos
                        cont_horarios +=1;
                    }
                    else if (cont % 3 == 1) {
                        horarioaux = listhorarios.showpos(cont_intervaloInicio);
                        horarioaux->InterInicio = stoi(str); // salva o intervalo inicial de tempo para chegar novo cliente
                        cont_intervaloInicio++;
                    }
                    else if (cont % 3 == 2) {
                        horarioaux = listhorarios.showpos(cont_intervaloFinal);
                        horarioaux->InterFinal = stoi(str); // salva o intervalo final de tempo para chegada de cliente
                        cont_intervaloFinal++;
                    }
                }
                catch(...) {cont--;}   
                cont+=1; 
            }
            arq.close(); 
        }
        else {std::cerr << "Não foi possivel abrir o arquivo de entrada : especificacoes.txt\n";return -1;}    
            listhorarios.couthorario();
         
        gerenciadorSimulacao();
    }
    //método que comparar se algum dos clientes tem a diferença maior do que a 
    //permitida
    bool gerenciadorSimulacao() { 
        int i = 0, j = 0,tempo =0; 
        int hora_chegada=0;
        int tim=0,atendimento=0; 
        supermercado vaptvupt;
        caixa c(j);
        node<horario> * hora_chegada_aux = listhorarios.showtop(); // O topo da fila de horários sempre será o horário mais próximo possivel de chegada
        // Função showtop() retorna o nó topo da lista, ou seja, o horário de chegada mais próximo
        while (tempo < 60*60*24) { 
            if(hora_chegada_aux->data->hora == tempo){ // Se o tempo do while for igual ao horário mais próximo registrado
                cout << "hora atual= " << hora_chegada_aux->data->hora << "s ";
                tim = randTime((hora_chegada_aux->data)->InterInicio, (hora_chegada_aux->data)->InterFinal);   // intevalo de manifestação do cliente
                atendimento = randTime(velAtenMin, velAtenMax); // tempo que o cliente irá passar na fila
                cout << "chegará cliente daqui a " << tim << "s ";
                hora_chegada = tempo + tim;
                cout << "e terá atendimento de " << atendimento << "s " << endl;
                listhorarios.pop(); //já passou o tempo, então é removido da fila de horarios
                if (!(listhorarios.isEmpty())) {
                hora_chegada_aux = listhorarios.showtop(); 
                }// o próximo da fila passa a ser o próximo horário 
            }
            tempo++; 
            i++;
            if (tempo == hora_chegada) {
                c.addcliente(i, tim, atendimento);
                cout << "hora atual= " << hora_chegada << " cliente adicionado" << endl; 
            }
        }
        c.coutcaixa();
    }


};
 
#endif