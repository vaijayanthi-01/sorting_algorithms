// https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/min-max-difference/description/

#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void bubbleSort(int arr[],int lb, int ub)
{
	int i, j, flag = 0;
	for(i = lb; i < ub - 1; ++i)
	{
		for(j = lb; j < ub - i - 1; ++j)
		{
			if(arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
				flag = 1;
			}
		}
		if(flag == 0)
			break;
	}
}

int main(void)
{
	int t;
	cin >> t;
  
	while(t--)
	{
		int n, m;
		cin >> n >> m;
		int arr[n], i;

		for(i = 0; i < n; ++i)
			cin >> arr[i];
		
		bubbleSort(arr, 0, n);
		
		int sum_max = 0, sum_min = 0;

		for(i = 0;i < n - m; ++i)
		{
			sum_min += arr[i];
		}
		
		for(i = n - 1; i >= m; --i)
		{
			sum_max += arr[i];
		}
		
		cout << (sum_max - sum_min) << endl;
	}
  
	return 0;
}
