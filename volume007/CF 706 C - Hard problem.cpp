#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

const int AMAX = 1e5 + 7;

int N, cost[AMAX];
long long dp[AMAX][2];
string s[AMAX][2];

int main()
{
	cin >> N;
	for(int i = 1; i <= N; ++i)
	{
		cin >> cost[i];
	}
	
	for(int i = 1; i <= N; ++i)
	{
		cin >> s[i][0];
		s[i][1] = s[i][0];
		
		reverse(s[i][1].begin(), s[i][1].end());
		
		for(int j = 0; j < 2; ++j)
		{
			dp[i][j]= 1e18;
			
			for(int k = 0; k < 2; ++k)
			{
				if(s[i][j] >= s[i - 1][k])
				{
					dp[i][j] = min(dp[i][j], dp[i - 1][k] + j * cost[i]);
				}
			}
		}
	}
	
	long long ans = min(dp[N][0], dp[N][1]);
	cout << (ans == 1e18 ? -1 : ans) << endl;

    return 0;
}

