#include "my.h"
int fun1(int *arr)
{
	

    int i, j;
    int sum = 0;
    for(i = 0; i < 10; ++i)
    {
            sum = sum + arr[i];
    }
    return sum;

}
