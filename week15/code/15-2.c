#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<string.h>
#include<errno.h>
#include<sys/types.h>
#define LOOP 10000000
#define NUM 4
#define NT 100
#define WRITE_FIRST 
static int share_cnt=0;
static pthread_rwlock_t rwlock;
void * reader(void* param)
{
	int i=(int )param;
	while(1){
		pthread_rwlock_rdlock(&rwlock);
		fprintf(stderr,"reader---%d:the shared count=%d\n",i,share_cnt);
		pthread_rwlock_unlock(&rwlock);
	}
	return NULL;
}
void * writer(void *param)
{
	int i=(int )param;
	while(1)
	{
		pthread_rwlock_wrlock(&rwlock);
		share_cnt++;
		fprintf(stderr,"writer---%d:the shared count=%d\n",i,share_cnt);
		pthread_rwlock_unlock(&rwlock);
		sleep(1);
	}
	return NULL;
}
int main()
{
	pthread_t tid[NT];
	pthread_rwlockattr_t rwlock_attr;
	pthread_rwlockattr_init(&rwlock_attr);
	#ifdef WRITE_FIRST
			pthread_rwlockattr_setkind_np(&rwlock_attr,PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP);
	#endif
	pthread_rwlockattr_init(&rwlock_attr);
	int i=0;
	int ret=0;
	pthread_rwlock_rdlock(&rwlock);
	for(i=0;i<NT;i++)
	{
		if(i%2==0)
		{
			ret=pthread_create(&tid[i],NULL,writer,(void*)i);
		}else
		{
			ret=pthread_create(&tid[i],NULL,reader,(void*)i);
		}
		if(ret!=0)
		{
			fprintf(stderr,"create thread %d failed!\n",i);
			break;
		}
	}
	pthread_rwlock_unlock(&rwlock);
	while(i-->0)
	{
		pthread_join(tid[i],NULL);
	}
	pthread_rwlockattr_destroy(&rwlock_attr);
	pthread_rwlock_destroy(&rwlock);
	return 0;
}
