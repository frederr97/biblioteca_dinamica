install:
	gcc -g -fPIC -shared -Wl,-soname,libmatematica.so fatorial.c media.c sub.c soma.c potencia.c -o libmatematica.so.01
	ln -s libmatematica.so.01 libmatematica.so
	cp libmatematica.so.01 /usr/lib
	cp libmatematica.so /usr/lib
	rm libmatematica.so*
	cp matematica.h /usr/include

run:
	gcc main.c -o main -lmatematica
	./main

clean:
	rm -rf libmatematica.so* *.o main