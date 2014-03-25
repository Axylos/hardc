all:
	gcc hello.c -o hello
	gcc ex3.c -o ex3
	gcc ex5.c -o ex5
	gcc ex6.c -o ex6
	gcc ex7.c -o ex7
	gcc ex8.c -o ex8
	gcc ex9.c -o ex9
	gcc ex10.c -o ex10
	gcc ex11.c -o ex11
	gcc ex12.c -o ex12
	gcc ex13.c -o ex13
	gcc stuff.c -o stuff
	gcc ex16.c -o ex16
	gcc ex17.c -o ex17
	ls

CFLAGS=-Wall -g

clean:
	rm -f hello ex3 ex5 ex6 ex7 ex8 ex9 ex10 ex11 ex12 ex13 ex14 stuff ex15 ex16 ex17
	ls

