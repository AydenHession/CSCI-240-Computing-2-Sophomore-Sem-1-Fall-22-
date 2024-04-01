all: Race.o Horse.o Main.o
	g++ Horse.o Race.o Main.o -o HorseRace

Race.o:
	g++ -c Race.cpp

Horse.o:
	g++ -c Horse.cpp

Main.o:
	g++ -c Main.cpp

Run: all
	./HorseRace

clean:
	rm -rf *.o
	rm -rf HorseRace
