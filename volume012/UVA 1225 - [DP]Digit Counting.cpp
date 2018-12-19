#include<bits/stdc++.h>

using namespace std;
const int MAXN = 10005;
const int MAXM = 10;
int main()
{
	int n, dp[MAXN][MAXM] = {0};
	for(int i = 0; i < MAXN; i++)
	{
		for(int j = i; j < MAXN; j++)
		{
			int tmp = i;
			while(tmp != 0)
			{
				dp[j][tmp%10]++;
				tmp /= 10;
			}
		}
	}
	cin >> n;
	for(int t = 0; t < n; t++)
	{
		int m;
		cin >> m;
		printf("%d", dp[m][0]);
		for(int i = 1; i < 10; i++)
		{
			printf(" %d", dp[m][i]);
		}
		puts("");
	}
	return 0;	
} 
