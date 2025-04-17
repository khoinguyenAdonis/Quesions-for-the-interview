CCP := g++
CFLAGS := -Wall -std=c++11 

SRC := $(wildcard *.cpp)
OBJ := $(patsubst %.cpp, %.o, $(SRC))

TARGET := main 

$(TARGET): $(OBJ)
	$(CCP) $(CFLAGS) -o $@ $^

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJ) $(TARGET)