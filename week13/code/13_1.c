#include"my.h"
void sigout(int dunno)
{
	switch(dunno)
	{
		case 1:
		printf("Get a signal SIGHUP");
		break;
		case 2:
		printf("Get a signal SIGHINT");
		break;
		case 3:
		printf("Get a signal SIGHQUIT");
		break;
	}
}
 int main()
{
	printf("test proc pid=%d\n",getpid());
	signal(SIGHUP,sigout);
	signal(SIGINT,sigout);
	signal(SIGQUIT,sigout);
while(1);
}
