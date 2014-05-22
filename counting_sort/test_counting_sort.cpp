#include <iostream>
#include <cstdlib>
#include "counting_sort.h"
using namespace std;
int main(int argc,char** argv)
{
	int n;
	if(argc < 2)
		n = 10;
	else 
		n = atoi(argv[1]);
	int i;
	int *arr = (int*) malloc(sizeof(int)*n);
	int *sorted_arr = (int*)malloc(sizeof(int)*n);
	srand(time(0));
	for(i = 0; i < n; ++i)
		arr[i] = rand() % 100;
	cout<<"init_array:"<<endl;
	for(int i = 0; i < n; ++ i)
		cout<<arr[i]<<" ";
	cout<<endl;
	counting_sort(arr,sorted_arr,n);
	cout<<"sorted_array:"<<endl;
	for(int i = 0; i < n; ++i)
		cout<<sorted_arr[i]<<" ";
	cout<<endl;
	free(arr);
	free(sorted_arr);


}
