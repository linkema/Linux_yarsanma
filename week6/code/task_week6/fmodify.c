#include"my.h"
FILE* fmodify(FILE* fp)
{	
	int fd = fileno(fp);
	int mod;
	char buf[10];
	printf("\n请输入需要改变的权限（例如0666）：");
	scanf("%d",&mod);
	sprintf(buf,"%04d",mod);
	fchmod(fd,buf);
	return fp;
}
