// https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/pizza-confusion/description/

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
  
	string str, str1;
	int points, points1;
	cin >> str >> points;

	for(int i = 0; i < N - 1; ++i)
	{
		cin >> str1 >> points1;
    
		if(points1 > points)
		{
			str = str1;
			points = points1;
		}
		else if(points1 == points)
		{
			points = points1;
			if(str > str1)
				str = str1;
		}
	}
	cout << str << endl;
	return 0;
}
