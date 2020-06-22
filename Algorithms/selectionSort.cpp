/* Selection Sort */

#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y);
void selectionSort(int arr[], int size);
void printArray(int arr[], int size);

int main(void)
{
  int arr[6] = {7, 4, 10, 8, 3, 1};
  int size = sizeof(arr) / sizeof(arr[0]);
  
  selectionSort(arr, size);
  printArray(arr, size);
  return 0;
}

void swap(int *x, int *y)
{
  *x = *x + *y;
  *y = *x - *y;
  *x = *x - *y;
}

void selectionSort(int arr[], int size)
{
  int i, j, min;
  
  for(i = 0; i < size - 1; ++i)
  {
    min = i;
    for(j = i + 1; j < size; ++j)
    {
      if(arr[j] < arr[min])
        min = j;
    }
    if(min != i)
      swap(&arr[i], &arr[min]);
  }
  
}

void printArray(int arr[], int size)
{
  for(int i = 0; i < size; ++i)
    cout<<arr[i]<<" ";
  cout<<endl;
}
