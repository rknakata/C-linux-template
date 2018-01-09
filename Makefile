#sample Makefile
#remember to use tabs
#-D flag defines a preprocessor macro name fromt he command line

debug: helloworld.c helloworld.h
	gcc -D DEBUGMODE -c helloworld.c
	gcc -o helloworld helloworld.o

helloworld.o: helloworld.c helloworld.h
	gcc -c helloworld.c

helloworld: helloworld.o
	gcc -o helloworld helloworld.o

all: helloworld

clean:
	rm helloworld.o helloworld
