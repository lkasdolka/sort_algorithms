/*
 *	merge_sort:
 *	firstly,divide the array in half iteratively until each 
 *	subarray contains only one element; then merge them in 
 *	order
 *
 *	Author: Andy Liu  	Date: May 19, 2014
 *
 * */
#include "merge_sort.h"
void merge_array(int* arr,int first,int mid, int last,int* tmp)
{
	int k = 0,l = first, r = mid + 1;
	while(l <= mid && r <= last)
	{
		if(arr[l] < arr[r])
			tmp[k++] = arr[l++];
		else 
			tmp[k++] = arr[r++];
	} 	
	while( l <= mid )
		tmp[k++] = arr[l++];
	while( r <= last )
		tmp[k++] = arr[r++];
	for(int i = 0; i < k; ++i)
	{
		arr[first+i] = tmp[i];
	}

}

void merge_sort(int* arr,int first, int last, int* tmp)
{
	if(first < last)
	{
		int mid = (first+last)/2;
		merge_sort(arr,first,mid,tmp);
		merge_sort(arr,mid+1,last,tmp);
		merge_array(arr,first,mid,last,tmp);
	}
}
