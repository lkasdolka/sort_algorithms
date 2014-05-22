 /**
 *	Bubble_sort
 *
 *	During one iteration,it compares the two adjacent
 *	numbers and exchange the order if the latter number 
 *	is larger than the former one. After one iteration,
 *	Bubble_sort_1 puts one largest number is moved to 
 *	the end, and Bubble_sort_2 puts one smallest number 
 *	in the front.
 *
 *	Author: Andy Liu
 *	Date: May 13,2014
 *
 * */

#include "bubble_sort.h"

void Bubble_sort_1(int *arr, int length)
{
	bool isChanged = false;
	for(int i = 0; i < length; ++i)
	{
		isChanged = false;
		for(int j = length-1; j > i; --j)
		{
			if(arr[j-1] > arr[j])	// ">" ensures the stability of this algorithm
			{
				int tmp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = tmp;
				isChanged = true;
			}// put the smallest to the front
		}
		if(!isChanged)
			break;	// If after one iteration,no numbers are exchanged,then the array is in order
	}	
}


void Bubble_sort_2(int *arr,int length)
{
	bool isChanged = false;
	for(int i = length-1;i > 0; --i)
	{
		bool isChanged = false;
		for(int j = 0; j < i; ++j)
		{
			if(arr[j] > arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
				isChanged = true;
			}// put the biggest to the back
		}
		if(!isChanged)
			break;
	}
}
