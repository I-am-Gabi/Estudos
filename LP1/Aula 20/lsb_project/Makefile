create_dynamic:
	g++ -shared -fPIC -c listlib_dynamic.cpp
	g++ -o liblsb.so listlib_dynamic.o -shared
	rm listlib_dynamic.o
create_estatic:
	g++ -c listlib.cpp
	ar rvs lsb.a listlib.o	
	rm listlib.o
all:
	g++ listlib.cpp main.cpp -o listlib
clean:
	rm listlib