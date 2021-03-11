CC=gcc
EXEC=circulaire
circulaire: tata.o toto.o main.o
		$(CC) -o circulaire tata.o toto.o main.o
tata.o: tata.c toto.h
		$(CC) -o tata.o -c tata.c
toto.o : toto.c tata.h
		$(CC) -o toto.o -c toto.c
main.o : main.c toto.h tata.h
		$(CC) -o main.o -c main.c
clean:
		rm -rf ∗.o