#include<bits/stdc++.h>

using namespace std;

int main()
{
	ofstream fout;
	fout.open("OutputFile.txt");
	int n;	
	scanf("%d", &n);
	for(int t = 0; t < n; t++)
	{
		int k;
		long long dp[100][100];
		scanf("%d", &k);
		int q, w, e, r;
		scanf("%d %d", &q, &w);
		scanf("%d %d", &e, &r);
		for(int i = 0; i < 100; i++)
		{
			for(int j = 0; j < 100; j++)
			{
				dp[i][j] = 0;
			}
		}		
		int tmp;
		scanf("%d", &tmp);
		for(int i = 0; i < tmp; i++)
		{
			int c, v;
			char op;
			cin >> c >> v >> op;
			c+= (c), v += (v);
			if(op == 'N')
			{ 
				dp[c][v+1] = -1;
			}
			else if(op == 'W')
			{
				dp[c-1][v] = -1;
			}
			else if(op == 'S')
			{
				dp[c][v-1] = -1;
			}
			else if(op == 'E')
			{
				dp[c+1][v] = -1;
			}
		}
		for(int i = 2*q; i <= 2*e; i+=2)
		{
			for(int j = 2*w; j <= 2*r; j+=2)
			{
				if(i == 2*q && j == 2*w)
				{
					dp[i][j] = 1;
				}
				else
				{
					long long l = dp[i-1][j] == -1 ? 0 : dp[i-2][j];
					long long d = dp[i][j-1] == -1 ? 0 : dp[i][j-2];
					dp[i][j] = l + d;
				}
			}
		}
		printf("%lld\n", dp[2*e][2*r]);
	}
	return 0;	
} 
