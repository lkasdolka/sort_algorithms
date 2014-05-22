/*
 *	bucket_sort
 *
 *	Andy Liu 	May 19, 2014
 *
 * */
#include "bucket_sort.h"
#include <cstdlib>
struct Node{
	double value;
	Node* next;
};

void bucket_sort(double* arr,int length)
{
	Node key[10];
	int number = 0;
	Node *p, *q; // temp var
	int counter = 0;
	//initialization
	for(int i = 0; i < 10; ++i)
	{
		key[i].value = 0;
		key[i].next = NULL;
	}
	for(int i = 0; i < length; ++i)
	{
		Node* insert = new Node();
		insert->value = arr[i];
		insert->next = NULL;
		number = arr[i] * 10;
		if(key[number].next == NULL)
			key[number].next = insert;
		else
		{
			p = &key[number];
			q = key[number].next;
			while((q != NULL) && (q->value <= arr[i]))
			{
				q = q-> next;
				p = p-> next;
			}
			insert->next = q;
			p->next = insert;
		}
	}
	for(int i = 0; i < 10; ++i)
	{
		p = key[i].next;
		if( p == NULL)
			continue;
		while(p != NULL)
		{
			arr[counter++] = p->value;
			p = p->next;
		}
	}
}
