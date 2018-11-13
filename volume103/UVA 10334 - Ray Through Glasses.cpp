#include<bits/stdc++.h>

using namespace std;
const int MAXN = 1005;
const int MAXM = 5005;
int dp[MAXN][MAXM] = {0};
void Glasses();
void print(int n);
int main()
{
	int n;
	Glasses();
	while(cin >> n)
	{
		print(n);
	}
	return 0;
}
void print(int n)
{ 
	int i = 5000;
	while(i >= 0)
	{
		if(dp[n][i])
		{
			break;
		}
		i--;
	}
	if( i == -1)
	{
		printf("0");
	}
    else
    {
		while(i >= 0)
		{
			printf("%lld", dp[n][i--]);
		}        	
	}
	puts("");
}
void Glasses()
{
	dp[0][0] = 1;
	dp[1][0] = 2;
	for(int i = 2; i < MAXN; i++)
	{
	    for(int j = 0; j < MAXM; j++)
		{
	        dp[i][j] += dp[i-1][j] + dp[i-2][j];
	    }
	    for(int j = 0; j < MAXM; j++)
		{
	        dp[i][j+1] += dp[i][j]/10;
	        dp[i][j] %= 10;			
		}		
	}
}
