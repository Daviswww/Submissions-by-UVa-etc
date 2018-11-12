#include<bits/stdc++.h>

using namespace std;
const int MAXN = 1005;
const long long int Overflow = 6227020800;
const long long int Underflow = 10000;
unsigned long long int dp[MAXN] = {0};

int main() 
{
	FILE * fo;
	fo = fopen("OutputFile.txt","w");
	int OF, UF;
	dp[1] = 1;
	for(int i = 2; i < MAXN; i++) 
	{		
		dp[i] = dp[i-1] * i;
		if(dp[i] > Overflow)
		{
			OF = i;
			break;
		}
		if(dp[i] < Underflow)
		{
			UF = i;
		}
	}
	int n;
	while(cin >> n) 
	{
		if(n >= OF)
		{
			printf("Overflow!\n");
		}
		else if(n <= UF)
		{
			if(n < 0 && abs(n) % 2 == 1)
			{
				printf("Overflow!\n");
			}
			else
			{
				printf("Underflow!\n");
			}
		}
		else
		{
			printf("%lld\n", dp[n]);
		}
		
	}
	return 0;
}
