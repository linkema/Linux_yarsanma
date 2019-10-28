#include"my.h"
void fcreate(FILE * fp)
{
	//bool flag=FALSE;
	unsigned a=randomFileNameNo();
	char file_name[100];
	sprintf(file_name,"%d",a);
	fp = fopen(file_name,"wb+");
	//if(fp)	flag=TRUE;
	//return flag;
	fclose(fp);
}
