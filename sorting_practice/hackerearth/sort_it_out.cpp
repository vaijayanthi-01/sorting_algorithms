// https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/sort-it-out/description/

#include <bits/stdc++.h>
using namespace std;

#define MAX 1000001

int main(void)
{
  int m, i;
  cin >> m;
  int arr[m];
  
  for(i = 0; i < m; ++i)
    cin >> arr[i];
  
  int pos[MAX];
  for(i = 0; i < m; ++i)
    pos[arr[i]] = i;
    
  sort(arr, arr + n);
  
  for(i = 0; i < m; ++i)
    cout << pos[arr[i]] << " ";  
  cout << endl;
  
  return 0;
}
