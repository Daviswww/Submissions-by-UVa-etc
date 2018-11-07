#include<bits/stdc++.h>

using namespace std;

int dp[1005][3005] = {0};

int main() 
{
	int i, j, last = 0;
	dp[0][0] = 1;
	for(i = 1; i <= 1000; i++) 
	{		
		for(j = 0; j <= last; j++)
		{
			dp[i][j] = dp[i-1][j] * i;
		}
		for(j = 0; j <= last; j++) 
		{
			dp[i][j+1] += dp[i][j]/10;
			dp[i][j] %= 10;
		}
		while(dp[i][j] != 0) 
		{
			dp[i][j+1] += dp[i][j]/10;
			dp[i][j] %= 10;
			j++;
		}
		last = j;	
	}
	int n;
	while(cin >> n) 
	{
		printf("%d!\n", n);
		int i = 3000;
		while(dp[n][i] == 0)
		{
			i--;
		}
		i++;
		while(i--)
		{
			printf("%d", dp[n][i]);
		}
		puts("");
	}
	return 0;
}
