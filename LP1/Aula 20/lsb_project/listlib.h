#ifndef _LISTLIB_
#define _LISTLIB_
#include <iostream>

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
	void pushb(list &l,int* toadd);
	void popb(list &l);
	void pushf(list &l, int* toadd);
	void popf(list &l);
	void setl(list &l);
	void printl(const list &l);
}

#endif