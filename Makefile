all: connections

connections: main.c libmy_mat.a
	gcc main.c -L. -lmy_mat -o connections -Wall

libmy_mat.a: my_mat.o
	ar rcs libmy_mat.a my_mat.o

my_mat.o: my_mat.c my_mat.h
	gcc -c my_mat.c -o my_mat.o

clean: 
	rm connections libmy_mat.a my_mat.o