#include "select_sort.h"
#include "stdio.h"
int main()
{
	int arr[] = { 2,5,6,8,7,12,900,21,2,1,120};
	int length = sizeof(arr)/sizeof(arr[0]);
	printf("The original order is:\n");
	for(int i = 0; i < length; ++i)
		printf("%d ",arr[i]);
	printf("\n");
	select_sort(arr,length);
	printf("After select_sort:\n");
	for(int i = 0; i < length; ++i)
		printf("%d ",arr[i]);
	printf("\n");

}
