task6:main.o fstatus.o menu.o fcreate.o random.o fmodify.o mode_to_letter.o fwrite.o fread.o freadList.o
		cc main.o fstatus.o menu.o fcreate.o random.o fmodify.o mode_to_letter.o fwrite.o fread.o freadList.o -o task6	
main.o:main.c my.h menu.c
		cc -c main.c menu.c
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
fwrite.o:fwrite.c my.h
		cc -c fwrite.c
fread.o:fread.c my.h freadList.c
		cc -c fread.c freadList.c
freadList.o:freadList.c my.h
		cc -c freadList.c
clean:
		rm -f *.o

