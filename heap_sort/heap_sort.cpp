/*
 *	heap_sort
 *	build a max heap from array, then using atrributes of max heap 
 *	to sort the array
 *
 *	with array index starting from 0, node i's father
 *	is floor((i-1)/2), i's left child is 2*i+1,and 
 *	i's right child is 2*i+2	 
 *
 *	Author: Andy Liu 	Date: May 15, 2014
 */
#include "heap_sort.h"

// 维护最大堆的性质	
void max_heapify(int *arr,int i,int heapsize)
{
	int l = 2*i+1; // array index starts from 0 instead of 1
	int r = 2*i+2;
	int largest = i;
	if(l < heapsize && arr[l] > arr[largest])
		largest = l;
	if(r < heapsize && arr[r] > arr[largest])
		largest = r;
	if(largest != i)
	{
		int tmp = arr[largest];
		arr[largest] = arr[i];
		arr[i] = tmp;
//	}
	// max_heapify should be included in if{}
	max_heapify(arr,largest,heapsize);//largest contains the value of former i
	}	
}

//建立最大堆
void build_max_heap(int *arr,int heapsize)
{
	for(int i = (heapsize-1)/2; i>=0; --i) 
	{
		max_heapify(arr,i,heapsize);
	}
}

//堆排序
void heap_sort(int* arr, int heapsize)
{
	build_max_heap(arr,heapsize);
	for(int i = heapsize-1; i>0; --i)
	{
		int tmp = arr[0];
		arr[0] = arr[i];
		arr[i] = tmp;
		max_heapify(arr,0,i);// 对除了最大值外的堆进行堆性质维护
	}
}



