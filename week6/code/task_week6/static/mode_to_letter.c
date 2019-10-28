#include "my.h"
void mode_to_letter(int mode,char *str)
{
/*-------这个函数用来把模式值转化为字符串------*/
	str[0]='-'; /*------这里的S_*****都是宏定义，用来判断模式属性-*/
	if(S_ISDIR(mode)) str[0]='d';/*-文件夹-*/
	if(S_ISCHR(mode)) str[0]='c';/*-字符设备-*/
	if(S_ISBLK(mode)) str[0]='b';/*-块设备-*/
	if(mode & S_IRUSR) str[1]='r';/*--用户的三个属性-*/
	else str[1]='-';
	if(mode & S_IWUSR) str[2]='w';
	else str[2]='-';
	if(mode & S_IXUSR) str[3]='x';
	else str[3]='-';
	if(mode & S_IRGRP) str[4]='r';/*--组的三个属性-*/
	else str[4]='-';
	if(mode & S_IWGRP) str[5]='w';
	else str[5]='-';
	if(mode & S_IXGRP) str[6]='x';
	else str[6]='-';
	if(mode & S_IROTH) str[7]='r';/*-其他人的三个属性-*/
	else str[7]='-';
	if(mode & S_IWOTH) str[8]='w';
	else str[8]='-';
	if(mode & S_IXOTH) str[9]='x';
	else str[9]='-';
	str[10]='\0';
}
