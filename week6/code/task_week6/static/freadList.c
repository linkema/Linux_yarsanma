#include"my.h"

void freadList(char *path, int depth)
{
	struct dirent **name_list;
	int n = scandir(path,&name_list,0,alphasort);
    	if(n < 0)
    	{ 
   	 	printf( "scandir return %d \n",n);
    	}
    	else
    	{
    		int index=0;
    		while(index < n)
        	{
       			printf("name: %s\n", name_list[index]->d_name);
        		free(name_list[index++]);
        	}
        	free(name_list);   
		}
}

