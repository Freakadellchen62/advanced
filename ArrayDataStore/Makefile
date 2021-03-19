CC=gcc
CFLAGS=-I.
arraydatastore: arraydatastore.o main.o
	$(CC) $(CFLAGS) -o $@ $^
main.o: main.c arraydatastore.h
	$(CC) $(CFLAGS) -c main.c
arraydatastore.o: arraydatastore.c arraydatastore.h
	$(CC) $(CFLAGS) -c arraydatastore.c
