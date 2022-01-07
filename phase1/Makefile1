all: tictactoe

tictactoe: main.o computer.o human.o player.o view.o board.o
	g++ -o tictactoe main.o computer.o human.o view.o board.o player.o

board.o: board.h board.cpp
	g++ -c  board.cpp -o board.o

view.o: view.h view.cpp board.h
	g++ -c view.cpp -o view.o

player.o: player.h player.cpp board.h
	g++ -c player.cpp -o player.o

human.o: human.h human.cpp board.h player.h
	g++ -c human.cpp -o human.o

computer.o: computer.h computer.cpp board.h player.h
	g++ -c computer.cpp -o computer.o

main.o: main.cpp computer.h human.h view.h board.h player.h
	g++ -c main.cpp -o main.o

clean:
	rm -rf *.o

cleanall: clean
	rm -f tictactoe