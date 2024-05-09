theRace: race.o animals.o
	gcc -g -Wall animals.o race.o -lm -o theRace 

race.o: animals.h race.c
	gcc -g -Wall -c race.c

animals.o: animals.h animals.c
	gcc -g -Wall -c animals.c

clean:
	rm -f race.o animals.o theRace

all: theRace
