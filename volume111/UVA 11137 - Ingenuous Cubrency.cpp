#include<bits/stdc++.h>
#define MAXN 10005
using namespace std;

long long int dp[MAXN] = {0};
int main()
{	
	dp[0] = 1;
	for(int i = 1; i*i*i < MAXN; i++) 
	{
		for(int j = i*i*i; j < MAXN; j++)
		{
			dp[j] += dp[j-i*i*i];
		}	
	}
	int n;
	while(scanf("%d", &n) != EOF)
	{
		printf("%lld\n", dp[n]);
	}
	return 0;
}
