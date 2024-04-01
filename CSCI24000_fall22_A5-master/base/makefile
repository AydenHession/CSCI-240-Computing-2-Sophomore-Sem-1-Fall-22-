all: main.o
	g++ main.o -o projectFive

main.o:
	g++ -c main.cpp

Run: all
	./projectFive

clean:
	rm -rf *.o
	rm -rf output.txt
	rm -rf projectFive
