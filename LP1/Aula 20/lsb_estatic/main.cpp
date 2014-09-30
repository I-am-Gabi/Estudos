#include "listlib.h"

int main(){
	list a;
	lsb::setl(a);
		lsb::pushf(a,new int(100));
		lsb::pushb(a,new int(200));
		lsb::printl(a);
		lsb::popb(a);
		lsb::printl(a);
		lsb::popf(a);
		lsb::printl(a);

}



