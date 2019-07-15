xyz.exe fibo.c small.c main.c

fibo.o:fibo.c
        gcc -c fibo.c
small.o:small.c
        gcc -c small.c
clean:
        rm -rf *.o
