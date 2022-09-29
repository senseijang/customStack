CC = g++
CXXFLAGS = -std=c++11 -g

valgrind: fullStack.o
	valgrind ./fullStack.o

run: fullStack
	./fullStack.o

fullStack: main stack
	g++ main.o Stack.o -o fullStack.o

main: main.cpp
	${CC} ${CXXFLAGS} -c main.cpp

stack: Stack.cpp Stack.h
	${CC} ${CXXFLAGS} -c Stack.cpp

clean:
	rm *.o
