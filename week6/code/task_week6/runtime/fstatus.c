#include"my.h"
void fstatus(FILE* fp)
{
	char str[12];
	struct stat sb;/*- 定义stat结构--*/
	char filename[20];
	char *now_dir, pwd[2]=".";
	now_dir=pwd;
  	printf("扫描的目录为： %s\n",now_dir);
    freadList(now_dir,0);
    printf("扫描完毕\n");
	printf ("请输入你要查询的文件名 :");
	scanf ("%s", filename);
	if ((fp = fopen(filename, "wr")) == NULL)
	{
		printf ("打开文件名失败，请检查拼写是否正确!!!");
		exit (0);
	}
	int fd = fileno(fp);
	fstat(fd, &sb); 
	int mode=sb.st_mode;
	printf("Mode:%d(octal)\n",mode);
	mode_to_letter(mode,str);
	printf("\nMode:%s\n",str);
	fclose(fp);
}
