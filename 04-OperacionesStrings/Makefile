/*
SSL
04-OperacionesStrings
Manuel Ignacio Espina
170.366-3
*/

SOURCE = string.c StringTest.c
BIN = test.out
OBJ = string.o StringTest.o
CC = gcc
CFLAGS = -std=c18 -g 

$(BIN): $(OBJ)
	$(CC) $(OBJ) -o $(BIN) $(CFLAGS)

run: $(BIN)
	$(BIN)
	
$(OBJ): $(SOURCE)
	$(CC) -c $(SOURCE) $(CFLAGS)