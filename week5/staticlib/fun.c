#include"my.h"
int* fun()
{
int a[10];
int i=0;
int c,b;
int *p=a[0];
printf("array:\n");
for(i=0;i<10;i++)
{
a[i]=rand()/100;;
printf("\n");
printf("%d ",a[i]);
}
/*随机产生数组*/
c=a[0];
b=a[0];
for(i=1;i<10;i++)
{
if (a[i]>c)
c=a[i];
if (a[i]<b)
b=a[i];
}
/*最大最小值*/
printf("\n");
printf("the max number is %d,the min number is %d",c,b);
getchar();
return p;
}
