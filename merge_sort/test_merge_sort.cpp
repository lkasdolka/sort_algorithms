#include "merge_sort.h"
#include <iostream>
#include <string>
using namespace std;
int main(int argc,char** argv)
{
	int arr[] = {101,2,42,5,15,25,12,99,78,80};
	int length = sizeof(arr)/sizeof(arr[0]);
	cout<<"original order:"<<endl;
	for(int i = 0; i < length; ++i)
		cout<< arr[i] <<" ";
	cout<<endl;
	int *tmp = new int(length);
	if(tmp == NULL)
	{
		cerr<<"memory allocation failed"<<endl;
	}
	merge_sort(arr,0,length-1,tmp);
	cout<<"After merge_sort:"<<endl;
	for(int i = 0; i < length; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	delete tmp;
}
