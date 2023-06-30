#variables
COMPILE = g++
FLAGS = 
OBJS = board.o
OUT = source

#targets
all: main.cpp $(OBJS)
	$(COMPILE) $(FLAGS) -o $(OUT) main.cpp $(OBJS)
board.o: board.hpp board.cpp
	$(COMPILE) $(FLAGS) -c board.cpp
clean:
	rm -rf *.o $(OUT)