DOTHAT = gcc -c -O2 -Wall -Wextra -fPIC
MOVE = mv -f *.o ..

full:
	$(DOTHAT) *.c
	$(MOVE)

test:
	$(DOTHAT) *.c

file: file!ld.c
	$(DOTHAT) file!ld.c

make: make!ld.c
	$(DOTHAT) make!ld.c

exit: exit!ld.c
	$(DOTHAT) exit!ld.c

check: check!ld.c
	$(DOTHAT) check!ld.c

path: path!ld.c
	$(DOTHAT) path!ld.c

dll:
	$(DOTHAT) *.c
	$(MOVE)
	$(MAKE) -C .. dll

mv:
	$(MOVE)

move:
	$(MOVE)

clean:
	rm -f *.o
