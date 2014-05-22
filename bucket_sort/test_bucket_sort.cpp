#include <iostream>
#include "bucket_sort.h"
using namespace std;
int main()
{
	double arr[] = {0.05, 0.75, 0.92, 0.21, 0.01, 0.79,0.25,0.55,0.87,0.98,0.33};
	int length = sizeof(arr)/sizeof(arr[0]);
	cout<<"Original order:"<<endl;
	for(int i = 0; i < length; ++i)
		cout<< arr[i] <<" ";
	cout<<endl;
	bucket_sort(arr,length);
	cout<<"After bucket_sort:"<<endl;
	for(int i = 0; i < length; ++i)
		cout<< arr[i] <<" ";
	cout<<endl;

}
