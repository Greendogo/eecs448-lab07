Lab07: main.o
	g++ -std=c++11 -Wall main.o -o Lab07

main.o: main.cpp Node.h LinkedList.h Node.hpp LinkedList.hpp
	g++ -std=c++11 -Wall -c main.cpp

# LinkedList.o: LinkedList.h LinkedList.hpp
# 	g++ -std=c++11 -g -c LinkedList.hpp
#
# Node.o: Node.h Node.hpp
# 	g++ -std=c++11 -g -c Node.hpp

clean:
	rm *.o main
	clean done
