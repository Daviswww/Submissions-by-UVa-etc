#include<bits/stdc++.h>
#define N 405
#define min_n -999999
using namespace std;
int dp[N], work[405][405];
int main()
{
	int n;
	while(cin >> n)
	{
		for(int i = 0; i <= N; i++)
		{
			dp[i] = 0;
			for(int j = 0; j < N; j++)
			{
				work[i][j] = min_n;
			}
		}
		int s, f, p, max_s = 0;
		for(int i = 0; i < n; i++)
		{
			scanf("%d %d %d", &s, &f, &p);
			work[s][f] = p;
			work[f][s] = p;
			max_s = max(max_s, f);
		}
		for(int i = 1; i <= max_s; i++)
		{
			for(int j = 1; j <= i; j++)
			{
				for(int k = j+1; k <= i; k++)
				{
					dp[i] = work[j][k] + dp[j];
				}
			}
		}
		cout << dp[max_s] << endl;
	}
	return 0;
} 
