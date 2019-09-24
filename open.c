#include"my.h"
void main()
{
	fddes=open(des,flags,0644);
	if(fddes<0)
	{
		exit(0);
	}
	while((nbytes=read(fdsrc,buf,20))>0)
	{
		z=write(fddes,buf,nbytes);
		if(z<0)
		{
			perror("write worning");
		}
	}
	close(fdsrc);
	close(fdsrc);
	printf("copying "/etc/passwd" file to" %s" file successfully!");
	exit(0);
}
