#include"my.h"
void fmodify(FILE* fp)
{	
	char filename[20];
	char *now_dir, pwd[2]=".";
	now_dir=pwd;
  	printf("扫描的目录为： %s\n",now_dir);
    freadList(now_dir,0);
    printf("扫描完毕\n");
	printf ("请输入你要修改的文件名 :");
	scanf ("%s", filename);
	if ((fp = fopen(filename, "wr")) == NULL)
	{
		printf ("打开文件名失败，请检查拼写是否正确!!!");
		exit (0);
	}
	int fd = fileno(fp);
	int mod;
	char buf[10];
	printf("\n请输入需要改变的权限（例如0666）：");
	scanf("%d",&mod);
	sprintf(buf,"%04d",mod);
	fchmod(fd,buf);
	fclose(fp);
}
