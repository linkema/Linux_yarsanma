#include "my.h"

void frread(FILE* fp)
{
	char filename[20];
	char *now_dir, pwd[2]=".";
	now_dir=pwd;
  	printf("扫描的目录为： %s\n",now_dir);
    freadList(now_dir,0);
    printf("扫描完毕\n");
	printf ("请输入你要读取的文件名 :");
	scanf ("%s", filename);
	if ((fp = fopen(filename, "r")) == NULL)
	{
		printf ("打开文件名失败，请检查拼写是否正确!!!");
		exit (0);
	}
	while (!feof(fp))
	{
		putchar (fgetc(fp));
	}
	printf ("\n");
	fclose (fp);
}
