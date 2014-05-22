/*
 *	insertion_sort
 *	scanning the ordered array from back to front,
 *	move the bigger ones afterwards ,find a suitable
 *	 position then insert the number in,
 *
 *	Author: Andy Liu 	Date: May 17,2014
 * */
#include "insertion_sort.h"
void insertion_sort(int *arr, int length)
{
	for(int i = 1; i < length; ++i)
	{
		int tmp = arr[i];
		int j = i-1;
		while(j>=0 && arr[j] > tmp)
		{
			arr[j+1] = arr[j];
			--j;
		}
		arr[j+1] = tmp;

	}
}
