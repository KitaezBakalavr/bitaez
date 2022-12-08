main: mujik.o main.o
	gcc mujik.o main.o -o main

mujik.o: mujik.c mujik.h
	gcc -c mujik.c

main.o: main.c mujik.h
	gcc -c main.c