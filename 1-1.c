#include "my.h"
#define BUFFERSIZE 8192
int  main (void)
{
	int n=0;
	char buff[BUFFERSIZE];
	while((n=read(STDIN_FILENO,buff,BUFFERSIZE))>0)
	{
		if(write(STDOUT_FILENO,buff,n)!=n)
		perror("write error");
	}
	if(n<0)
		perror("read error");
	exit(0);
}
