#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int n, x, y = 0;
int dp[1000][1000];
int top[1000];
int lf[1000];
int main(void)
{
	
	scanf("%d",&n);
	
	while(n--)
	{
		lf[x] = 1;
		for(int i=2;i<=n;++i)
		{
			scanf("%d", &x);
			lf[x] = i;
			if(x >y) x = y;
		}
		for(int i=1;i<=n;++i)      
		{
			top[i] = i;
		}
		memset(dp,0,sizeof(dp)); //Âk¹s	
		
		for(int i=1;i<=n;++i)
		{
			for(int j=1;j<=n;++j)     
			{
				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
				if(top[i] == lf[j]) dp[i][j]=max(dp[i][j],dp[i-1][j-1]+1);	
			}	
		}
		printf("%d\n", dp[n][n]);		
	}
	return 0;
}

