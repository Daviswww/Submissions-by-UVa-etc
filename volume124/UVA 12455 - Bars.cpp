#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int tmp, q, p, dp[1005] = {0};
		dp[0] = 1;
		cin >> q >> p;
		for(int i = 0; i < p; i++)
		{
			cin >> tmp;
			for(int j = q-tmp; j >= 0; j--)
			{
				if(dp[j] && !dp[j+tmp])
				{
					dp[j+tmp] = 1;
				}
			}
		}
		if(dp[q])
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;	
} 
