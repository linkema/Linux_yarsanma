#include"my.h"
unsigned randomFileNameNo(){
	unsigned a;
	srand((unsigned)time(NULL));
	a = rand() ;
	return a;
}
