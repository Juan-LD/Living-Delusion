DOTHAT = gcc -c -O2 -Wall -Wextra -fPIC
FILE = $(MAKE) -C
LINK = gcc -shared -o LD_LIB.so *.o
MOVE = mv -f LD_LIB.so ..

run:
	$(DOTHAT) *.c	
	$(FILE) art full
	$(FILE) ext full
	$(FILE) games full
	$(FILE) local full
	$(FILE) nina full
	$(FILE) save full
	$(FILE) .. obj
	$(LINK)
	$(MOVE)

art:
	$(FILE) art full

ext: 
	$(FILE) ext full

extras: extras!ld.c
	$(DOTHAT) extras!ld.c

games: 
	$(FILE) games full

local:
	$(FILE) local full

nina: nina!ld.c
	$(FILE) nina full

os: osmanip!ld.c
	$(DOTHAT) osmanip!ld.c

osmanip: osmanip!ld.c
	$(DOTHAT) osmanip!ld.c

save:
	$(FILE) save full

style: style!ld.c
	$(DOTHAT) style!ld.c 

sys: sys!ld.c
	$(DOTHAT) sys!ld.c

dll:
	$(LINK)
	$(MOVE)

mv:
	$(MOVE)

move:
	$(MOVE)

clean:
	rm -f *.o
