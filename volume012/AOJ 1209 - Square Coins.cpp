#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long dp[6001], d[20];
	for(int i = 1; i <= 17; i++)
	{
		d[i-1] = i * i;	
	} 
	for(int i = 0; i <= 6000; i++)
	{
		dp[i] = 1;
	}
	for(int i = 1; i <= 17; i++)
	{
		for(int j = d[i]; j <= 6000; j++)
		{
			dp[j] += dp[j-d[i]];
		}
	}
	int tmp;
	while(cin >> tmp && tmp)
	{	
		printf("%lld\n", dp[tmp]/2);
	}
	return 0;
}
