#include "bubble_sort.h"
#include <stdio.h>

int main()
{
	int src1[]={10,8,9,7,6,5,2,4,1,3};
	int src2[]={10,8,9,7,6,5,2,4,1,3};
	int length = sizeof(src1)/sizeof(src1[0]);
	printf("The original order is:\n");
	for(int i = 0; i < length; ++i)
		printf("%d ",src1[i]);
	printf("\n");
	Bubble_sort_1(src1,length);
	Bubble_sort_2(src2,length);
	printf("After Bubble_sort1,the order is:\n");
	for(int i = 0; i < length; ++i)
		printf("%d ",src1[i]);
	printf("\n");
	printf("After Bubble_sort2,the order is:\n");
	for(int i = 0; i < length; ++i)
		printf("%d ",src2[i]);
	printf("\n");
	

}
