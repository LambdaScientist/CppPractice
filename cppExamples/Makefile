# build an executable named myprog from myprog.c
all: mkEx2
clean: 
	$(RM)  example

mkEx1: ex1.cpp
	   g++ ex1.cpp  -std=c++1y -I /usr/local/include  -o ex1 
	   @echo "Running Ex1:"
	   @echo "----------------\n"
	   @./ex1

mkEx2: ex2.cpp
	   g++ ex2.cpp -std=c++1y -I /usr/local/include -o ex2
	   @echo "Running Ex2:"
	   @echo "----------------\n"
	   @./ex2