main: main.o tree.o pine.o lumberjack.o
	g++ -o main main.o tree.o pine.o lumberjack.o -Wall
main.o: main.cpp
	g++ -c main.cpp -Wall
tree.o: tree.cpp tree.h 
	g++ -c tree.cpp -Wall
pine.o: pine.cpp pine.h tree.h 
	g++ -c pine.cpp -Wall
lumberjack.o: lumberjack.cpp lumberjack.h tree.h pine.h
	g++ -c lumberjack.cpp -Wall
clean:
	rm -f *.o main