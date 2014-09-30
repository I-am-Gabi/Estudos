#ifndef _LISTLIB_
#define _LISTLIB_
#include <iostream>

#if defined _WIN32 || defined __CYGWIN__ // Macros para Windows
	#ifdef BUILDING_DLL // Identificador a ser definido para o pré-processador
		#define DYNAMIC_MODE __declspec(dllexport) // Quando gerando a biblioteca
	#else
		#define DYNAMIC_MODE __declspec(dllimport) // Quando usando a biblioteca
	#endif
#else // Macros para Linux
	#define DYNAMIC_MODE __attribute__((visibility("default")))
#endif

struct node{
	int* data;
	struct node * next;
};
struct list{
	struct node *begin;
	struct node *end;
	int size;
};

namespace lsb{
	void DYNAMIC_MODE pushb(list &l,int* toadd);
	void DYNAMIC_MODE popb(list &l);
	void DYNAMIC_MODE pushf(list &l, int* toadd);
	void DYNAMIC_MODE popf(list &l);
	void DYNAMIC_MODE setl(list &l);
	void DYNAMIC_MODE printl(const list &l);
}

#endif