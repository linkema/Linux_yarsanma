#include"my.h"
void fun()
{
int a[100];
int i,j=0;
int c,b;
printf("array:\n");
for(i=0;i<100;i++)
{
a[i]=rand()/100;;
j=j+1;
if (j==10)
{
j=1;
printf("\n");
}
printf("%d ",a[i]);
}
/*随机产生数组*/
c=a[0];
b=a[0];
for(i=1;i<100;i++)
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
}
