#include<bits/stdc++.h>

using namespace std;

int d[] = { 1, 2, 4, 10, 20, 40, 100, 200, 400, 1000, 2000};

int main()
{
	long long dp[6001];
	for(int i = 0; i <= 6000; i++)
	{
		dp[i] = 1;
	}
	for(int i = 1; i < 11; i++)
	{
		for(int j = d[i]; j <= 6000; j++)
		{
			dp[j] += dp[j-d[i]];
		}
	}
	double tmp;
	while(cin >> tmp && tmp)
	{	
		printf("%6.2lf%17lld\n", tmp, dp[int(tmp * 20)]);
	}
	return 0;
}
