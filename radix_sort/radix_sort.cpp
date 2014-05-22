#include "radix_sort.h"
// get the max digit
int maxDigit(int* arr,int digit)
 {
      int n = 0;
      int* temp = new int[digit];
      for(int i = 0; i < digit; i++)
      temp[i]= arr[i];
      for(int i = 0; i < digit; i++)
      {
          int counter =1;
          while(temp[i] / 10 > 0)
          {
              counter++;
              temp[i] /= 10;
          }
          if(n < counter)
          n = counter;
       }
       delete[] temp;
       return n;
}
 
 //基数排序
void radix_sort(int* arr, int digit)
{
     int n = maxDigit(arr, digit);
     int* temp = new int[digit];
     int* count = new int[10];
     int i, j, k;
     int radix = 1;
     for(i = 1; i <= n; i++)
     {
         for(j = 0; j < 10; j++)
             count[j] = 0;
         for(j = 0; j < digit; j++)
         {
             k = (arr[j] / radix) % 10;
             count[k]++;
         }
         for(j = 1; j < 10; j++)
             count[j] = count[j-1] + count[j];
         for(j = digit - 1; j >= 0; j--)
         {
             k = (arr[j] / radix) % 10;
             count[k]--;
             temp[count[k]] = arr[j];
         }
         for(j = 0; j < digit; j++)
             arr[j] = temp[j];
         radix *= 10;
     }
     delete[] temp;
     delete[] count;
}
 
