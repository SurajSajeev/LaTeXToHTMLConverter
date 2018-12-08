all:
	bison -d a.y
	flex a.l
	gcc -o latex a.tab.c -lfl

clean: