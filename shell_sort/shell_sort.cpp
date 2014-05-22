/*
 *	shell_sort:
 *	sort the original array into small arrays in gap.
 *	sort each small array, then shrink the gap and 
 *	sort each until gap == 1;
 *
 *	Author: Andy Liu	Date: May 17, 2014
 *
 * */
#include "shell_sort.h"
void shell_sort(int *arr, int length)
{
	for(int gap = length/2; gap > 0; gap/=2)
	{
		for(int i = gap; i < length; i++)
		{
			int temp = arr[i];
			int j = i - gap;
			while( j >=0 && arr[j] > temp)
			{
				arr[j+gap] = arr[j];	
				j = j - gap;
			}
				arr[j+gap] = temp;
		}
	}
}
