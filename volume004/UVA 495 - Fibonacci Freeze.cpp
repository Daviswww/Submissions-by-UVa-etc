#include <iostream>

using namespace std;

const int MXA_N = 5001;
int dp[MXA_N][MXA_N] = {0};

int main() 
{
	dp[1][0] = 1;
	for(int i = 2; i <= 5000; i++)
	{
		for(int j = 0; j < 5001; j++)
		{
			dp[i][j] += dp[i-1][j] + dp[i-2][j];
		}
		for(int j = 0; j < 5001; j++)
		{
			dp[i][j+1] += dp[i][j]/10;
			dp[i][j] %= 10;			
		}
	}
	int n;
	while(cin >> n) 
	{
		printf("The Fibonacci number for %d is ", n);
		int i = 5000;
		while(i >= 0)
		{
			if(dp[n][i])
			{
				break;
			}
			i--;
		}
		if( i == -1 )
		{
			printf("0");
		}
		else
		{
			while(i >= 0)
			{
				printf("%d", dp[n][i--]);
			}        	
		}
		puts("");
	}
	return 0;
}
