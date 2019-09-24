#include<bits/stdc++.h>

using namespace std;

const int N = 105;
int main()
{
	int t;
	
	cin >> t;
	
	for(int cas = 1; cas <= t; cas++)
	{
		string cg;
		long long n, ary[N][N] = {0};
		bool go = false;
		cin >> cg >> cg >> n;
	 	
	 	for(int i = 0; i < n; i++)
	 	{
	 		for(int j = 0; j < n; j++)
			{
				cin >> ary[i][j];
				if(ary[i][j] < 0)
				{
					go = true;
				}
			}
		}
		
	 	for(int i = 0; i < n; i++)
	 	{
	 		for(int j = 0; j < n-i; j++)
			{
				if(ary[i][j] != ary[n-1-i][n-1-j])
				{
					go = true;
					goto end;
				}
			}
		}
		end:
		if(go)
		{
			printf("Test #%d: Non-symmetric.\n", cas);
		}
		else
		{
			printf("Test #%d: Symmetric.\n", cas);
		}
	}
	return 0;
} 
