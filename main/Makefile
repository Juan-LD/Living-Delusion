CC = gcc
FLAGS = -c -O2 -lstdc++ -Wall -Wextra -fPIC
LIB = -L. -l:LD_LIB.so

run: LD.c
	$(MAKE) -C . link 
	./LD -d -i

link: LD.c
	$(CC) $(FLAGS) LD.c 
	$(CC) LD.o -o LD $(LIB)

obj: LivingDelusion.c
	$(CC) $(FLAGS) LivingDelusion.c
	mv -f LivingDelusion.o libs/

obj-dll:
	$(MAKE) -C . obj
	$(MAKE) -C libs/ dll

test: LDtest.c
	$(CC) $(FLAGS) LDtest.c
	$(CC) LDtest.o -o LDtest $(LIB)	
	./LDtest

test-that:
	$(MAKE) -C libs/art/ ascii
	$(MAKE) -C libs/art/ mv
	$(MAKE) -C libs/ dll
	$(MAKE) test

clean:
	rm -f *.o 
