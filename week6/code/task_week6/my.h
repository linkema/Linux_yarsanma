#include <sys/types.h> 
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <dirent.h>
void mode_to_letter(int mode,char *str);
void fcreate(FILE* fp);
unsigned randomFileNameNo();
void fmodify(FILE* fp);
void frread(FILE* );
void fwwrite(FILE* );
void fstatus(FILE* );
void menu();
void freadList(char *path, int depth);


