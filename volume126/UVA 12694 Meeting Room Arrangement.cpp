/*
https://uva.onlinejudge.org/external/126/12694.pdf
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int k = 0; k < n; k++)
	{
		int x, y, ary[15], sum = 0, day = 0;
		for(int i = 0; i < 15; i++)
		{
			ary[i] = 11;
		}
		while(cin >> x >> y)
		{
			if(x == 0 && y == 0) break;
			int count = y - x;
			for(int i = x; i < y; i++)
			{
				if(ary[i] > count)
				{
					ary[i] = count;
					count--;
				}
				else
				{
					break;
				}
			}
		}
		for(int i = 0; i < 15; i++)
		{
			if(ary[i] == 1)
			{
				day++;
			}
		}
		cout << day << endl;
	}
	return 0;
}
