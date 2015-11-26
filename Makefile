# I am a comment, and I want to say that the variable CC will be
# the compiler to use.
CC=g++
# Hey!, I am comment number 2. I want to say that CFLAGS will be the
# options I'll pass to the compiler.
CFLAGS= -std=c++11 -pedantic -O2 -Wall -lwinmm -static-libgcc
OBJECTS = main.o Terminal.o
TARGET = ChemAnalyzer.exe

ChemAnalyzer.exe: $(OBJECTS) 
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)

Terminal.o: ./src/Terminal.cpp ./include/Terminal.h 
	$(CC) $(CFLAGS) -c ./src/Terminal.cpp 

main.o: ./src/main.cpp ./include/Terminal.h
	$(CC) $(CFLAGS) -c ./src/main.cpp 

clean:
	del $(OBJECTS) $(TARGET)