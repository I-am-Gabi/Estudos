create:
	g++ -shared -fPIC -c listlib.cpp
	g++ -o liblsb.so listlib.o -shared
all:
	g++ main.cpp -L. -llsb -o exe
run:
	clear
	LD_LIBRARY_PATH=./ ./exe

clean:
	rm exe