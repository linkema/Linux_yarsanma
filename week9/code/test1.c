#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
int x=100;
int main()
{
	int y=0;
	static int w=33;
	int ret;
	printf("test1:pid=%ld,ppid=%ld\n",getpid(),getppid());
	printf("test1:address x=%ld,y=%ld,w=%ld\n",&x,&y,&w);
	ret=system("/home/rlk/linux_yarsanma/week9/code/caller");
	sleep(10);	
	return 0;
}
