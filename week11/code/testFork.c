#include"my.h"
	int main()
{
	int count=0;
	FILE *fp;
    pid_t child1,child2;
	wait(0);
	child1=fork();
    printf("befork fork\n");
	if ((fp = fopen("test", "w")) == NULL)
	{
		printf ("打开文件名失败，请检查拼写是否正确!!!");
		exit (0);
	}
	child2=fork();
	printf("after child1 fork\n");
	if ((fp = fopen("test", "w")) == NULL)
	{
		printf ("打开文件名失败，请检查拼写是否正确!!!");
		exit (0);
	}
	for(count=0;count<10;count++)
	fprintf(fp,"%d ",count);
	for(count=0;count<10;count++)
	fprintf(fp,"%d ",count);
    exit(0);
	if ((fp = fopen("test", "r")) == NULL)
	{
		printf ("打开文件名失败");
		exit (0);
	}
	while (!feof(fp))
	{
		putchar (fgetc(fp));
	}
	fclose (fp);
	exit(0);
}
