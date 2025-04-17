CC := g++
CFLAGS := -Wall -std=c++11

SRC := $(wildcard src\*.cpp)
INC := $(wildcard inc\*.h)

TARGET := app

.PHONY : clean all

all : $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $^

clean :
	rm $(TARGET)
