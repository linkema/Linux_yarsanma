#include"my.h"
#define NUM 4
 void * fun(void * arg)
{
	printf("%d thread is running!\n tid=%p\n",arg,pthread_self());
	int count=((int)arg+1)*100;
	int sum=0;
	for(int i=0;i<=count;i++)
	{
		sum+=i;
	}
	printf("\n%d\n",sum);
	return NULL;
}
int main()
{
	pthread_t tid[NUM];
	int i,ret[NUM];
	for(i=0;i<NUM;i++)
	{
		ret[i]=pthread_create(&tid[i],NULL,fun,(void *)i);
		if(ret[i]!=0)
		{
			return -1;
		}

	}
	pthread_join(&tid,NULL);
	printf("Good bye\n");
	return 0;
}
