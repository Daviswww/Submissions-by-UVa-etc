#include<bits/stdc++.h>

using namespace std;
const int MAXN = 55;
int dp[MAXN][MAXN] = {0}, a[MAXN] = {0};
void SetStart(int n);
int main()
{
	int bar, n;
	
	while(cin >> bar && bar)
	{
		cin >> n;
		for(int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		a[n+1] = bar;
		SetStart(n);
		for(int len = 2; len <= n+1; len++)
		{
			for(int left = 0; left + len <= n+1; left++)
			{
				int right = left + len;
				for(int i = left + 1; i < right; i++)
				{
					dp[left][right] = min(dp[left][right], dp[left][i]+dp[i][right]+a[right]-a[left]);
				}
			}        	
		}
		printf("The minimum cutting is %d.\n", dp[0][n+1]);
	}
	return 0;
}
void SetStart(int n)
{
	memset(dp, 1000000, sizeof(dp));
	sort(a, a+n);
	for(int i = 0; i <= n; i++)
	{
		dp[i][i+1] = 0;
	}
}
