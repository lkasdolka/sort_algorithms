#ifndef HEAP_SORT_H
#define HEAP_SORT_H
int left(int i);
int right(int i);
void build_max_heap(int* arr, int heapsize);
void max_heapify(int *arr,int i,int heapsize);
void heap_sort(int *arr,int heapsize);
#endif
