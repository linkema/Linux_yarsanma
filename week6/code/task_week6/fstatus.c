#include"my.h"
FILE* fstatus(FILE* fp)
{
	char str[12];
	struct stat sb;/*- 定义stat结构--*/
	int fd = fileno(fp);
	int mode=fstat(fd, &sb); 
	printf("Mode:%lo(octal)\n",(unsigned long)sb.st_mode);
	mode_to_letter(sb.st_mode,str);
	printf("\nMode:%s\n",str);
	return fp;
}
