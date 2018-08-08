/*
https://nanti.jisuanke.com/t/25
input
3
5 75 25
100
output
2 3
*/

#include<iostream>

using namespace std;

int main()
{
	int n;
	
	while(cin >> n)
	{
		int ary[505], sum, k, v;
		for(int i = 1; i <= n; i++)
		{
			cin >> ary[i];
		}
		cin >> sum;
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= n; j++)
			{
				if(ary[i] + ary[j] == sum && j != i)
				{
					k = i, v = j; 
					break;
				}
			}
		}
		cout << v << " " << k;	
	}
	return 0;
} 
