#include <iostream>

int partition3(int* data, int low, int high)
{
	int l = low, h = high;
//	int key = data[(low+high)/2];
	int key = data[high];//this has some sort of logic relation!
//	if(l > h)
//		return -1;
//	else if(l == h) 
//		return l;
	while(l < h)
	{
		//senario:data[l] == key needn't to be exchanged!
		//
		//while( l < h && data[l] < key )
		while(l < h && data[l] <= key)
			l++;
		data[h] = data[l];
		while( l < h && data[h] >=  key )
			h--;
		data[l] = data[h];
		if(l < h)
		{
			int tmp = data[l];
			data[l] = data[h];
			data[h] = tmp;
		}
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
int main()

{
	int test[]={9,8,7,5,4,2,1,3,6,10};
	int length = sizeof(test)/sizeof(test[0]);
	int low = 0, high = length - 1;
	std::cout<<low<<" "<<high<<std::endl;
	std::cout<<"the original order:"<<std::endl;
	for(int i = 0 ; i < length; ++i)
		std::cout<<test[i]<<" ";
	std::cout<<std::endl;
	quick_sort3(test,low,high);
	std::cout<<"after quick_sort3,the  order:"<<std::endl;
	for(int i = 0 ; i < length; ++i)
		std::cout<<test[i]<<" ";
	std::cout<<std::endl;
	return 0;

}
