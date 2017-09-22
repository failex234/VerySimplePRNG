all:
	gcc random.c -c
	gcc random.o main.c -o randomgen
clean:
	rm random.o
