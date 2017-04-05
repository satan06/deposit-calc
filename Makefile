CC := gcc
CFLAGS = -c -Wall -Werror
EXE := bin/deposit

all: src/main.c src/deposit.c $(EXE)

$(EXE): build/main.o build/deposit.o
		$(CC) build/main.o build/deposit.o -o $@

build/main.o: src/main.c src/deposit.h
		$(CC) $(CFLAGS) src/main.c -o $@   

build/deposit.o: src/deposit.c 
		$(CC) $(CFLAGS) src/deposit.c -o $@   

.PHONY: all clean
clean:
		rm -rf build/*.o 
