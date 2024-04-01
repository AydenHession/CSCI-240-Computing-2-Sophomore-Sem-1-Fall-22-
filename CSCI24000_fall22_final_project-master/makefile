club: Member.o MemberStats.o MemberPriority.o MemberLocker.o Worker.o Boss.o Manager.o main.o
	g++ Member.o MemberStats.o MemberPriority.o MemberLocker.o Worker.o Boss.o Manager.o main.o -o club

Member.o: Member.cpp Member.h MemberStats.h MemberLocker.h MemberPriority.h
	g++ -c Member.cpp

MemberStats.o: MemberStats.cpp MemberStats.h
	g++ -c MemberStats.cpp

MemberPriority.o: MemberPriority.cpp MemberPriority.h
	g++ -c MemberPriority.cpp

MemberLocker.o: MemberLocker.cpp MemberLocker.h
	g++ -c MemberLocker.cpp

Worker.o: Worker.cpp Worker.h MemberStats.h Member.h MemberLocker.h MemberPriority.h
	g++ -c Worker.cpp

Boss.o: Boss.cpp Boss.h MemberStats.h Member.h MemberLocker.h MemberPriority.h
	g++ -c Boss.cpp

Manager.o: Manager.cpp Manager.h MemberStats.h Member.h MemberLocker.h MemberPriority.h
	g++ -c Manager.cpp

main.o: main.cpp MemberPriority.h MemberStats.h MemberLocker.h Boss.h Manager.h Worker.h Member.h
	g++ -c main.cpp

clean:
	rm -rf *.o
	rm -rf tempFile.txt
	rm -rf club

run: club
	./club
