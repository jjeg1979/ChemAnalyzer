# I am a comment, and I want to say that the variable CC will be
# the compiler to use.
CC=g++
# Hey!, I am comment number 2. I want to say that CFLAGS will be the
# options I'll pass to the compiler.
CFLAGS= -std=c++0x -c -Wall -lwinmm 
all: ChemAnalyzer

./src/Terminal.o: ./src/Terminal.cpp
	$(CC) $(CFLAGS) ./src/Terminal.cpp ./include/Terminal.h -c -o ./src/Terminal.o

./src/main.o: ./src/main.cpp
	$(CC) $(CFLAGS) ./src/main.cpp -c -o ./src/main.o

ChemAnalyzer.exe: ./src/main.o ./src/Terminal.o
	$(CC) $(CFLAGS) -o ./src/main.o ./src/Terminal.o 
	
clean:
	del .\src\*.o .\ChemAnalyzer.exe