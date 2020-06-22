#include <iostream>
using namespace std;

void swap(int *x, int *y);
int partition(int arr[], int lb, int ub);
void quickSort(int arr[], int lb, int ub);
void printArray(int arr[], int size);

int main(void)
{
    int arr[] = {15, 5, 24, 8, 1, 3, 16, 10, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    quickSort(arr, 0, size - 1);
    printArray(arr, size);
    
    return 0; 
}

int partition(int arr[], int lb, int ub)
{
    int pivot = lb;
    int start = lb;
    int end = ub;
    
    while(start < end)
    {
        while(arr[start] <= arr[pivot])
            ++start;
        while(arr[end] > arr[pivot])
            --end;
        if(start < end)
            swap(&arr[start], &arr[end]);
    }
    
    swap(&arr[end], &arr[pivot]);
    return end;
}

void quickSort(int arr[], int lb, int ub)
{
    if(lb < ub)
    {
        int pos = partition(arr, lb, ub);
        
        quickSort(arr, lb, pos);
        quickSort(arr, pos + 1, ub);
    }
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void printArray(int arr[], int size)
{
    for(int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
}
