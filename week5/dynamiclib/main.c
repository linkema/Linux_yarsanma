#include 	<dlfcn.h>
#include"/home/rlk/linux_yarsanma/week5/dynamiclib/my.h"
int main()
{
	void * handle;
	int (*f1)();
	char * error;
	handle=dlopen("/home/rlk/linux_yarsanma/week5/dynamiclib/libtest.so",RTLD_LAZY);
	if(!handle)	
	{
		perror("装载失败！！！");
		return -1;
	}
	f1=dlsym(handle,"fun");
	if((error=dlerror())!=NULL)
	{
		fprintf(stderr,"%s\n",error);
		exit(1);
	}
	(*f1)();
	if(dlclose(handle)<0)
	{
		fprintf(stderr,"%s\n",error);
		exit(1);
	}
	return 0;
}
