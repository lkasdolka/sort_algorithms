#include "heap_sort.h"
#include <cstdio>

int main(int argc,char** argv)
{
	int src[] = {10,8,5,21,20,100,1,65,201,205,877};
	int length = sizeof(src)/sizeof(int);
	printf("original order:\n");
	for(int i = 0; i < length; ++i)
	{
		printf("%d ",src[i]);
	}
	printf("\n");
	heap_sort(src,length);
	printf("after heap_sort:\n");
	for(int i = 0; i < length; ++i)
	{
		printf("%d ",src[i]);
	}
	printf("\n");

}
