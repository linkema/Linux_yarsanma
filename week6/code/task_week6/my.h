#include <sys/types.h> 
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void mode_to_letter(int mode,char *str);
FILE* fcreate(FILE* fp);
unsigned randomFileNameNo();
FILE* fmodify(FILE* fp);

