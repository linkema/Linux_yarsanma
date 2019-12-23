#include"my.h"
void signhandler(int signal);
int main()
{
	int fd[2];
	if(signal(SIGPIPE,signhandler)==SIG_ERR)
	{
		fprintf(stderr,"signal create error(%s)!\n",strerror(errno));		
		return -1;
	}
	if(pipe(fd)==-1)
	{
		fprintf(stderr,"pipe create error(%s)!\n",strerror(errno));		
		return -2;
	}
	pid_t pid;
	pid=fork();
	if(pid==-1)
	{
		fprintf(stderr,"fork error \n");
		exit(-3);
	}
	else if(pid==0)
	{
		fprintf(stdout,"[child] i will close the last read ebd of pipe.pid=%d,ppid=%d\n",getpid(),getppid());
		close(fd[0]);
		exit(0);
	}else
	{
		
		close(fd[0]);
		sleep(5);
		int ret;
		ret=write(fd[1],"hello",5);
		if(ret==-1)
		{
			fprintf(stderr,"parent write error\n");
		}
		return 0;
	}
}
void signhandler(int signo){printf("parent cateched the signal %d",signo);}
