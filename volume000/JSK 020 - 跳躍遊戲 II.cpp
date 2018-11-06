#include<iostream>
using namespace std;
int dp[1000];
int main()
{
	int n;
	while(cin >> n)
	{
		int  ary[105];
		for(int i = 1; i <= n; i++)
		{
			dp[i] = 99999;	
		}		
		for(int i = 1; i <= n; i++)
		{
			cin >> ary[i];	
		}
		dp[1] = 0;
		for(int i = 1;i <= n; i++)
		{
			for(int j = 1; j <= ary[i]; j++)
			{
				dp[i+j] = min(dp[i]+1, dp[i+j]);
			}
		}
		cout << dp[n] << endl;
	}
	return 0;
} 
