#include"my.h"
int int main(int argc, char const *argv[])
{
	int pid;
	if((pid=fork())<0)	
	{
		perror("fail to fork\n");
		return -1;
	}
	else if(pid==0)
	{
		printf("%d: child is running now\n",getpid());
		while(1);
		printf("%d: child exits now\n", );
		exit(0);
	}
	else{
		printf("%d: parent running now\n",getpid());
		while(1);
		printf("%d: parent exits now\n",getpid());
	}
	exit(0);
}