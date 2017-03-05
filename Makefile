project1.out: main.o functions.o
  g++ main.o functions.o

main.o: main.cpp functions.h
  g++ -c -Wall -pedantic main.cpp

functions.o: functions.cpp functions.h
  g++ -c -Wall -pedantic functions.cpp

