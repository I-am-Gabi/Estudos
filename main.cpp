#include <iostream>

struct no {
	int valor;
};

class Classe {
private:
	no * no1;
	no * no2;
public:
	Classe (no * ptr_no1, no * ptr_no2) : no1(ptr_no1),no2(ptr_no2) { /* empty */ };
	void address1() {std::cout << no1 << std::endl;};
	void address2() {std::cout << no2 << std::endl;};


};

int main (){

Classe ob01(new no, new no); 
ob01.address1();
ob01.address2();

}