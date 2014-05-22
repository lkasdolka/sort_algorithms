/*
 *	quick_sort
 *
 *	find a number called "pivot" in a array, put those smaller than pivot
 *	left to it, and put those bigger than pivot right to it. Then call the
 *	function recursively until every subarray has just one/none elements.
 *
 *	Author: Andy Liu 	Date: May 13, 2014
 *
 *
 *
 * */

#include "quick_sort.h"
#pragma once
#include <stack>
/*	
 *	version 1
 *	recursive, last element of array as pivot
 *
 * */

int partition1(int *data,int low, int high)
{ 
	int key = data[high]; // make last one element as pivot
	int i = low - 1;
	for(int j = low; j < high; ++j )
	{
		if(data[j] < key)
		{
			++i;
			int tmp = data[j];
			data[j] = data[i];
			data[i] = tmp;
		}
	}
	data[high] = data[i+1];
	data[i+1] = key;
	return i+1;
}
void quick_sort1(int *data,int low,int high)
{
	// if low == high, you need to do nothing
	if(low < high)
	{
		int mid = partition1(data,low,high);
		quick_sort1(data,low,mid-1);
		quick_sort1(data,mid+1,high);
	}
}

/*
 *	version 2
 *	recursive, first element of array as pivot
 *
 **/

int partition2(int *data,int low, int high)
{
	int key = data[low];
	int i = low;
	for(int j = low + 1; j <= high; ++j)
	{
		if(data[j] < key)
		{
			i++;
			int tmp = data[j];
			data[j] = data[i];
			data[i] = tmp;
		}
	}
	//here exchange data[low] and data[i]!!!(instead of data[i+1]) and return i
	//data[low] = data[i+1];
	//data[i+1] = key;
	data[low] = data[i];
	data[i] = key;
	//return i+1;
	return i;
}
void quick_sort2(int *data,int low,int high)
{
	if(low < high)
	{
		int mid = partition2(data,low,high);
		quick_sort2(data,low,mid-1);
		quick_sort2(data,mid+1,high);
	}
}

/*
 *	version 3
 *	recursive, partition use Hoore method
 *	middle element as pivot
 */

int partition3(int* data, int low, int high)
{
	int l = low, h = high;
//	int key = data[(low+high)/2];

	// cause we first start from l below, so here we must set data[high] as pivot !!
	int key = data[high];
//	if(l > h)
//		return -1;
//	else if(l == h)
//		return l;
	while(l < h)
	{
		while( l < h && data[l] < key )
			l++;
		data[h] = data[l];
		while( l < h && data[h] > key )
			h--;
		data[l] = data[h];
	}
	// l == h
	data[l] = key;
	return l;
}

void quick_sort3(int *data,int low,int high)
{
	if(low < high)
	{
		int mid = partition3(data,low,high);
		quick_sort3(data,low,mid-1);
		quick_sort3(data,mid+1,high);

	}
}

/*
 *	version 4
 *	non-recursive,middle element as pivot
 *
 */
int partition4(int* data, int low, int high)
{
	int l = low, h = high;
	int key = data[(h+l)/2];
	if(l > h)
		return -1;
	else if(l == h)
		return l;
	while(l < h)
	{
		while(l < h && data[l] < key)
			l++;
		while(l < h && data[h] > key)
			h--;
		if(l < h)
		{
			int tmp = data[l];
			data[l] = data[h];
			data[h] = tmp;			
		}
	}
	//l == h
	return l;
}
void quick_sort4(int *data,int low,int high)
{
	std::stack<int> s;
	// it's important that low < high
	
	if( low < high)
	{
		int mid = partition4(data,low,high);
		//if((mid-1)>low)
		s.push(low);
		s.push(mid-1);
		//if((high > (mid+1)))
		s.push(mid+1);
		s.push(high);
	}	

	while(!s.empty())
	{
		high = s.top();
		s.pop();
		low = s.top();
		s.pop();
		if(low < high)
		{
			int mid = partition4(data,low,high);
			//if((mid-1)>low)
			s.push(low);
			s.push(mid-1);
			//if((high > (mid+1)))
			s.push(mid+1);
			s.push(high);
		}	
	}	
}

