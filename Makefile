default: kreis

kreis.o: kreis.c
	gcc -c kreis.c -o kreis.o

kreis: kreis.o
	gcc kreis.o -o kreis

clean:
	-rm -f kreis.o
	-rm -f kreis
