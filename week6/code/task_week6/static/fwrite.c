#include "my.h"

void fwwrite(FILE* fp)
{
	char buf[1024];
	char filename[20];
	char *now_dir, pwd[2]=".";
	now_dir=pwd;
  	printf("扫描的目录为： %s\n",now_dir);
    freadList(now_dir,0);
    printf("扫描完毕\n");
	printf ("请输入你要读取的文件名 :");
	scanf ("%s", filename);
	if ((fp = fopen(filename, "w")) == NULL)
	{
		printf ("打开文件名失败，请检查拼写是否正确!!!");
		exit (0);
	}
	printf("\n请输入需要写入的信息(换行后输入#号结束)：\n");
	gets(buf);
	while(strcmp(buf,"#")!=0)
	{
		fputs(buf,fp);
		fputs("\n",fp);
		gets(buf);
	}
	fclose(fp);
}
