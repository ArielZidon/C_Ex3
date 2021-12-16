CC = gcc
FLAGS = -Wall -g
AR = ar
.PHONY: clean all

stringProg : main.o strings.a
	gcc -Wall -g -o stringProg main.o strings.a

main.o : main.c functions.h
	$(CC) $(FLAGS) -c main.c

gematria.o : gematria.c functions.h
	gcc -Wall -g -c gematria.c

angram.o : angram.c functions.h
	gcc -Wall -g -c angram.c

atbash.o : atbash.c functions.h
	gcc -Wall -g -c atbash.c

strings.a : gematria.o atbash.o angram.o
	ar -rcs strings.a gematria.o atbash.o angram.o

all : stringProg
clean : rm -f *.o *.a stringProg

