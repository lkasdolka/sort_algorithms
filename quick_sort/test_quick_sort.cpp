#include "quick_sort.h"
#include <iostream>

int main(int argc,char** argv)
{
	int data1[] = {11,20,50,2,60,99,101,24,56,78};
	int data2[] = {11,20,50,2,55,99,101,3,56,78};
	int data3[] = {11,20,51,2,160,99,101,24,56,78};
	int data4[] = {11,20,50,2,60,299,101,524,56,78};
	int length = sizeof(data1)/sizeof(data1[0]);
	std::cout<<length<<std::endl;
	int low = 0, high = length-1;
	std::cout<<"The original order is:"<<std::endl;
	for(int i = 0; i < length; ++i)
	{
		std::cout<<data1[i]<<" ";
	}
	std::cout<<std::endl;
	quick_sort1(data1,low,high);
	std::cout<<"After quick_sort1,the order is:"<<std::endl;
	for(int i = 0; i < length; ++i)
	{
		std::cout<<data1[i]<<" ";
	}
	std::cout<<"quick_sort1 finished"<<std::endl;
	quick_sort2(data2,low,high);
	std::cout<<"After quick_sort2,the order is:"<<std::endl;
	for(int i = 0; i < length; ++i)
	{
		std::cout<<data2[i]<<" ";
	}
	std::cout<<"2 finished"<<std::endl;
	quick_sort3(data3,low,high);
	std::cout<<"After quick_sort3,the order is:"<<std::endl;
	for(int i = 0; i < length; ++i)
	{
		std::cout<<data3[i]<<" ";
	}
	std::cout<<"3 finished"<<std::endl;
	quick_sort4(data4,low,high);
	std::cout<<"After quick_sort4,the order is:"<<std::endl;
	for(int i = 0; i < length; ++i)
	{
		std::cout<<data4[i]<<" ";
	}
	std::cout<< "4 finished"<<std::endl;
}
