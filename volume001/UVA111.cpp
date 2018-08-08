#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int n,x;
int dp[30][30];
int top[30];
int lf[30];
int main(void)
{
	scanf("%d",&n);		
	for(int i=1;i<=n;++i)      
	{
		scanf("%d", &x);
		top[x] = i;
	}
	

	while(scanf("%d",&x) != EOF)
	{
		lf[x] = 1;
		for(int i=2;i<=n;++i)
		{
			scanf("%d", &x);
			lf[x] = i;
		}
		memset(dp,0,sizeof(dp));
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)     
			{
				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
				if(top[i] == lf[j]) dp[i][j]=max(dp[i][j],dp[i-1][j-1]+1);	
			}	
		}
		printf("%d\n", dp[n][n]);			
	}	
	return 0;
}
