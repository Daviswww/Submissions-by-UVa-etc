#include<bits/stdc++.h>
#define MAXN 1005
#define chack(x, y) ((x) > (y) ? (x - y) : 0)
using namespace std;

bool prime[MAXN];
int dp[MAXN] = {0}, ti[MAXN] = {0};
void pn();

int main()
{
	FILE * fo;
	fo = fopen("OutputFile.txt","w");
	pn();
	int n, c;
	while(cin >> n >> c)
	{
		int t, i;
		printf("%d %d:", n, c);
		//fprintf(fo,"%d %d:", n, c);
		if(n == 1)
		{
			//fprintf(fo," 1\n\n");
			printf(" 1\n\n");
			continue;
		}
		if(ti[n] % 2 == 1)
		{
			i = chack(ti[n], ((c * 2)- 1)) / 2;
			t = min(ti[n], c * 2 - 1 + i);
		}
		else
		{
			i = chack(ti[n], (c * 2)) / 2;
			t = min(ti[n], c * 2 + i);
		}
		for(int j = i; j < t; j++)
		{
			printf(" %d", dp[j]);
			//fprintf(fo," %d", dp[j]);
		}
		//fprintf(fo,"\n\n");
		printf("\n\n");
	}
	return 0;
}
void pn()
{
	int k = 1;
	for (int i=0; i <= MAXN; i++)
	{
		prime[i] = true;
	}
	prime[0] = false;
	prime[1] = true;
	dp[0] = 1; 
	for (int i = 2; i <= MAXN; i++)
	{
		if (prime[i])
		{
			dp[k++] = i;
			for (int j = i+i; j < MAXN; j+=i)
			{
				prime[j] = false;             	
			}    	
		}
		ti[i] = k;
	}
}
