#include "counting_sort.h"
#include <cstdlib>
void counting_sort(int *init_arr, int *sorted_arr, int length)
{
	//count_arr[i] calculates number of figures that are smaller
	int *count_arr = (int*)malloc(sizeof(int)*100); //assume that input ranges from 0 to 99
	int i, j, k;
	for(k = 0; k < 100; ++k)
	{
		count_arr[k] = 0;
	}
	for(i = 0; i < length; ++i)
		count_arr[init_arr[i]]++; // calculate the number of elements of different value in init_arr[]
	for(k = 1; k < 100; ++k)
		count_arr[k] +=count_arr[k-1]; //calculate the number of elements smaller than init_arr[i]
	for(j = length; j > 0; --j)
	{
		sorted_arr[count_arr[init_arr[j-1]]-1]=init_arr[j-1];
		count_arr[init_arr[j-1]]--;
	}
	free(count_arr);
}
