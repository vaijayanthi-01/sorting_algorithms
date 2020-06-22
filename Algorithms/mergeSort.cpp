#include <iostream>
using namespace std;

void merge(int arr[], int lb, int mid, int ub);
void mergeSort(int arr[], int lb, int ub);
void printArray(int arr[], int size);

int main(void)
{
    int arr[] = {15, 5, 24, 8, 1, 3, 16, 10, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    mergeSort(arr, 0, size - 1);
    printArray(arr, size);
    
    return 0; 
}

void merge(int arr[], int lb, int mid, int ub)
{
    int i, j, k;
    int n1 = mid - lb + 1;
    int n2 = ub - mid;
    int L[n1], R[n2];
    
    for(i = 0; i < n1; ++i)
        L[i] = arr[lb + i];
    
    for(i = 0; i < n2; ++i)
        R[i] = arr[mid + 1 + i];
    
    i = 0;
    j = 0;
    k = lb;
    
    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
            ++i;
        }
        else 
        {
            arr[k] = R[j];
            ++j;
        }
        ++k;
    }
    
    while(i < n1)
    {
        arr[k] = L[i];
        ++i;
        ++k;
    }
    
    while(j < n2)
    {
        arr[k] = R[j];
        ++j;
        ++k;
    }
    
}

void mergeSort(int arr[], int lb, int ub)
{
    if(lb < ub)
    {
        int mid = lb + (ub - lb) / 2;
        
        mergeSort(arr, lb, mid);
        mergeSort(arr, mid + 1, ub);
        
        merge(arr, lb, mid, ub);
    }
}

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
}
