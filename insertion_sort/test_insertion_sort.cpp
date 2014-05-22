#include "insertion_sort.h"
#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int arr[] = {2,5,8,1,1,21,12,27,82,63};
	int length = sizeof(arr)/sizeof(arr[0]);
	cout<<"Original order:"<<endl;
	for(int i = 0; i < length; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	insertion_sort(arr,length);
	cout<<"After insertion sort:"<<endl;
	for(int i = 0; i < length; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
