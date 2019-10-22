task6:main.o fstatus.o menu.o fcreate.o random.o fmodify.o mode_to_letter.o
		cc main.o fstatus.o menu.o fcreate.o random.o fmodify.o mode_to_letter.o -o task6	
main.o:main.c my.h fstatus.c menu.c
		cc -c main.c fstatus.c menu.c
fstatus.o:fstatus.c mode_to_letter.c my.h 
		cc -c fstatus.c mode_to_letter.c
mode_to_letter.o:mode_to_letter.c my.h
		cc -c mode_to_letter.c
menu.o:menu.c my.h
		cc -c menu.c
random.o:random.c my.h
		cc -c random.c
fcreate.o:fcreate.c random.c my.h
		cc -c fcreate.c random.c
fmodify.o:fmodify.c my.h
		cc -c fmodify.c 
clean:
		rm -f *.o

