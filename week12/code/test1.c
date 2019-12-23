#include"my.h"

int main()
{
	int pid,fd[2],len;
	char buf[1024*64];
	FILE* stream;
	if(pipe(fd)!=0)
	{
		ferror("pipe create error!");		
		return -1;
	}else{
		pid=fork();
		if(pid<0)
		{
			ferror("pid create error!");		
			return -2;
		}else if(pid==0)
			{
				close(fd[1]);
				dup2(fd[0],0);
				close(fd[0]);
				if(execl("/bin/cat","cat",NULL,NULL)==-1)
				{
					fprintf(stderr,"excel fail");
					return -3;
				}
				exit(0);
			}else
				{
					close(fd[0]);
					printf("you can type aline and the line will echoed:\n");
					dup2(fd[1],1);
					close(fd[1]);
					while(gets(buf)!=NULL)
						{
							puts(buf);
						}
				}
	}
	
}
