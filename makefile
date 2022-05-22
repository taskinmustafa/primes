build: main.c
	gcc -O3 main.c -o main -lm

run: main
	./main
