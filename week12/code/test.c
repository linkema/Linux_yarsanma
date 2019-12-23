#include"my.h"
int main()
{
	pid_t pid1,pid2,pid3;
	int pipe_fd[2];
	if(pipe(pipe_fd)<0)
	{
		perror("创建管道失败！");
		return -1;
	}
	pid1=fork();
	if(pid1<0)
	{perror("fork failed");exit(-1);}
	else if(pid1==0)
	{
		close(pipe_fd[0]);
		char *msg="1";
		long long byte=0;
		for(int i=0;i<65536;i++)
		{
			write(pipe_fd[1],msg,1);
			printf("byte:%lld\n",++byte);
		}
	}else if(pid2==0)	
	{
		
	}else if(pid3==0)	
	{
		
	}else{
	wait(NULL);
	wait(NULL);
	wait(NULL);	
	}
	exit(0);
}
