/*
 *	select_sort:
 *	Find the minimun number in the unsorted array and swap it with the 
 *	last element in the sorted array until the whole array is sorted.
 *
 *	Author: Andy Liu	Date: May 15, 2014
 */

#include "select_sort.h"
void select_sort(int *arr,int length)
{
	int i,j,min;
	for(int i = 0; i < length-1; ++i)
	{
		min = i;// asume i is min
		for(int j = i+1; j < length; ++j)
		{
			if(arr[j] < arr[min])
				min = j;			
		}
		if(min != i)
		{
			int tmp = arr[min];
			arr[min] = arr[i];
			arr[i] = tmp;
		}
	}
}
