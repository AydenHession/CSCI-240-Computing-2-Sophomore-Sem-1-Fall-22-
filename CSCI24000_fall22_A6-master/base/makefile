studentHeap: date.o location.o student.o stats.o main.o
	g++ date.o location.o student.o stats.o main.o -o studentHeap

date.o: date.cpp date.h
	g++ -c date.cpp

location.o:location.cpp location.h
	g++ -c location.cpp

student.o: student.cpp student.h date.h location.h stats.h
	g++ -c student.cpp

stats.o: stats.cpp stats.h
	g++ -c stats.cpp

main.o: main.cpp student.h stats.h date.h location.h
	g++ -c main.cpp

clean:
	rm -rf *.o
	rm -rf shortReport.txt
	rm -rf fullReport.txt
	rm -rf studentHeap

valgrind:
	valgrind ./studentHeap

run: studentHeap
	./studentHeap
