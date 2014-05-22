#include "radix_sort.h"
#include <iostream>
using namespace std;
int tmp[10];
int count[10];
int main()
{
	
	int data[]={73, 22, 93, 43, 55, 14, 28, 65, 39, 81};
	int length = sizeof(data)/sizeof data[0];
	cout<<"original order:"<<endl;
	for(int i=0;i<length;i++)
		cout<<data[i]<<" ";
	cout<<endl
	cout<<"After radix_sort:"<<endl;
        for(int i=0;i<length;i++)
        cout<<data[i]<<" ";
	cout<<endl;
	return 0;
}
