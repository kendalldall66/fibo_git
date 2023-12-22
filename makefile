fibo:fibo.o main.o
	gcc -o fibo main.o fibo.o

.c.o:
	gcc -c $<
