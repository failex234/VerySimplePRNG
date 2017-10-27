CC=gcc
CC_FLAGS=-Wall
all:
	$(CC) $(CC_FLAGS) random.c -c
	$(CC) $(CC_FLAGS) random.o main.c -o randomgen
clean:
	rm random.o randomgen
