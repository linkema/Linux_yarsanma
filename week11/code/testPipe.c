#include"my.h"
int main()
{
	int pipe_fd[2];
	if(pipe(pipe_fd)<0)
	{
		perror("创建管道失败！");
		return -1;
	}
	pid_t pid=fork();
	if(pid<0)
	{
		perror("fork error");
		return -1;
	}else if(pid==0)
	{
		close(pipe_fd[0]);
		char *msg="1";
		long long byte=0;
		while(1)
		{
			write(pipe_fd[1],msg,1);
			printf("byte:%lld\n",++byte);
		}
	}
	else
	{
		char msg[10];
		while(1)
		{
			memset(msg,'\0',sizeof(msg));
		}
	}
	exit(0);
}
