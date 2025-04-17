
CC := gcc 
CCP := g++
CCFLAGS := -Wall -g -std=c11 -Iheaders
CCPFLAGS := -Wall -g -std=c++11 -Iheaders
SRC_C := $(wildcard src/*.c)
SRC_CPP := $(wildcard src/*.cpp)
OBJ_C := $(patsubst src/%.c, obj/%.o, $(SRC_C))
OBJ_CPP := $(patsubst src/%.cpp, obj/%.o, $(SRC_CPP))
TARGET := main

.phony: all clean

$(TARGET): $(SRC_C) $(SRC_CPP)
	$(CCP)  $(CCPFLAGS) -o $@ $^


run : $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)