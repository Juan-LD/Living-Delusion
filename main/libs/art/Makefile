DOTHAT = gcc -c -O2 -Wall -Wextra -fPIC
MOVE = mv -f *.o ..

full:
	$(DOTHAT) *.c
	$(MOVE)

test:
	$(DOTHAT) *.c

table: table!ld.c
	$(DOTHAT) table!ld.c

ascii: ascii!ld.c
	$(DOTHAT) ascii!ld.c

tricks: tricks!ld.c
	$(DOTHAT) tricks!ld.c

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
