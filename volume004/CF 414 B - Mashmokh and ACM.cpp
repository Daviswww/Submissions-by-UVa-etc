#include <iostream>
using namespace std;

int main()
{
	int N, K;
	long long ans[2007][2], M = 1e9 + 7;
	
	for(int i = 1; i <= 2000; ++i)
	{
		ans[i][0] = 1;
		ans[i][1] = 0;
	}
	
	cin >> N >> K;
	
	for(int i = 2; i <= K; ++i)
	{
		for(int j = 1; j <= N; ++j)
		{			
			for(int k = j; k <= N; k += j)
			{
				ans[k][1] = (ans[k][1] + ans[j][0]) % M;
			}
		}
		
		for(int j = 1; j <= N; ++j)
		{
			ans[j][0] = ans[j][1];
			ans[j][1] = 0;
		}
	}
	
	long long f = 0;
	for(int i = 1; i <= N; ++i)
	{
		f = (f + ans[i][0]) % M;
	}
	
	cout << f << endl;

    return 0;
}

