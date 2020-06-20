/* Bubble Sort */

#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y);
void bubbleSort(int arr[], int size);
void printArray(int arr[], int size);

int main(void)
{
  int arr[5] = {15, 16, 6, 8, 5};
  int size = sizeof(arr) / sizeof(arr[0]);
  
  bubbleSort(arr, size);
  
  cout<<"Sorted array: ";
  
  printArray(arr, size);
  return 0;
}

void swap(int *x, int *y)
{
  *x = *x + *y;
  *y = *x - *y;
  *x = *x - *y;
}

void bubbleSort(int arr[], int size)
{
  int i, j;
  
  for(i = 0; i < size - 1; ++i)
  {
    for(j = 0; j < size - i - 1; ++j)
    {
      if(arr[j] > arr[j + 1])
        swap(arr[j], arr[j + 1]);
    }
  }
  
}

void printArray(int arr[], int size)
{
  for(int i = 0; i < size; ++i)
    cout<<arr[i]<<" ";
  cout<<endl;
}
