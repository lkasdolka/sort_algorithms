#include "shell_sort.h"
#include <iostream>
using namespace std;
int main()
{
	int src[] = {9,8,7,2,1,3,4,6,5};
	int length = sizeof(src)/sizeof(int);
	cout<<"original order:"<<endl;
	for(int i = 0; i < length; ++i)
		cout<<src[i]<<" ";
	cout<<endl;
	shell_sort(src,length);
	cout<<"After shellsort:"<<endl;
	for(int i = 0; i < length; ++i)
		cout<<src[i]<<" ";
	cout<<endl;
}
