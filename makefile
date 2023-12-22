fibo:fibo.o main.o
	gcc main.c -o fibo main.o fibo.o

.c.o:
	gcc -c $<
