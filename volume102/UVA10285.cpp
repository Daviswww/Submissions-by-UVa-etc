#include<iostream>
#include <algorithm>
#include <vector>
#include<cstdio>
#include <string.h>

using namespace std;
struct point 
{
	int x;
	int y;
	int high;
};
bool compare(point x,point y)
{
	return x.high < y.high;
}
int main(void)
{
	int gc;
	cin >> gc;
	while(gc--)
	{
		int m, n;
		string x;
		
		cin >> x >> m >> n;
		point k[m*n];
		int HIGH[m][n];
		for(int i = 0; i < m ; i++)
		{
			for(int j = 0; j < n ; j++)
			{
				cin >> k[i*n+j].high;
				k[i*n+j].x = i;
				k[i*n+j].y = j;
				HIGH[i][j] = k[i*n+j].high;
			}
		}
		int dp[m][n];
		memset(dp,0,sizeof(dp));
		int sum = 0;
		sort(k,k+m*n,compare);
		for(int i = 0; i < m; i++)
			for(int j = 0; j < n; j++)
			{
				int max = 0;
				int x = k[i*n+j].x;
				int y = k[i*n+j].y;
				int high = k[i*n+j].high;
				if(x-1 >= 0 && high > HIGH[x-1][y])
				{
					if(dp[x-1][y] > max)
					{
						max = dp[x-1][y];
					}
				}
				if(x+1 < m && high > HIGH[x+1][y])
				{
					if(dp[x+1][y] > max)
					{
						max = dp[x+1][y];
					}
				}
				if(y-1 >= 0 && high > HIGH[x][y-1])
				{
					if(dp[x][y-1] > max)
					{
						max = dp[x][y-1];
					}
				}
				if(y+1 < n && high > HIGH[x][y+1])
				{
					if(dp[x][y+1] > max)
					{
						max = dp[x][y+1];
					}
				}
				dp[x][y] = max+1;
				if(max+1 > sum)
					sum = max+1;
			}
		cout << x << ": " << sum << endl;
		
	}
	return 0;
}
