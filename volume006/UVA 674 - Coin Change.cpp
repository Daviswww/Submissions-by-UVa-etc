#include<bits/stdc++.h>

using namespace std;

int d[] = {1, 5, 10, 25, 50};
int main()
{
	long long dp[8000];
	for(int i = 0; i <= 7489; i++)
	{
		dp[i] = 1;
	}
	for(int i = 1; i < 5; i++)
	{
		for(int j = d[i]; j <= 7489; j++)
		{
			dp[j] += dp[j-d[i]];
		}
	}
	int tmp;
	while(cin >> tmp)
	{	
		printf("%d\n", dp[tmp]);
	}
	return 0;
}
