CC = gcc
FLAGS = -Wall -std=c11

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

TARGET = main
.PHONY: all clean

all: rotate_matrix

rotate_matrix: $(SRC)
	$(CC) $(FLAGS) -o $(TARGET) $^
clean:
	rm -f rotate_matrix $(OBJ) $(TARGET)

