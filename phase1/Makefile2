CC=g++
CFLAGS=
LDFLAGS=
EXEC=tictactoe
SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
	$(CC) -c $< -o $@

board.o: board.cpp board.h
view.o: view.cpp view.h board.h
player.o: player.cpp player.h board.h
human.o: human.cpp human.h board.h player.h
computer.o: computer.cpp computer.h board.h player.h
main.o: main.cpp computer.h human.h view.h board.h player.h

clean:
	rm -rf *.o

cleanall: clean
	rm -f $(EXEC)