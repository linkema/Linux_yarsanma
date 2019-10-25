#include"my.h"
void menu(){	
	int arg;
	FILE *fp;
	while(1){
		printf("****YarsanMa 的文件管理系统****\n");
		for(int i=0;i<30;i++){printf("*");}
		printf("\n");
		printf("0.退出\n");
		printf("1.创建新文件\n");
		printf("2.写文件\n");
		printf("3.读文件\n");
		printf("4.修改文件权限\n");
		printf("5.查看当前文件权限\n");
		for(int i=0;i<30;i++){printf("*");}
		printf("\nPlease input your choice(0-5):");
		scanf("%d",&arg);
			switch(arg)
			{
				case 0:
					exit(0);
				case 1:
					fcreate(fp);
					break;
				case 2:
					fwwrite(fp);
					break;
				case 3:
					frread(fp);
					break;
				case 4:
					fmodify(fp);
					break;
				case 5:
					fstatus(fp);
					break;
				default:
					printf("\ninput error!!!");
					getchar();
					exit(0);
			}
	}
}
