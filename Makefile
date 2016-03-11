CFLAGS=-Wall -g

clean:
	rm -f ex01 ex03 ex04 ex05 ex06 ex07

ex1:
	gcc $(CFLAGS) learnc_ex01.c -o ex01

ex3:
	gcc $(CFLAGS) learnc_ex03.c -o ex03

ex4:
	gcc $(CFLAGS) learnc_ex04.c -o ex04

ex5:
	gcc $(CFLAGS) learnc_ex05.c -o ex05

ex6:
	gcc $(CFLAGS) learnc_ex06.c -o ex06

ex7:
	gcc $(CFLAGS) learnc_ex07.c -o ex07

