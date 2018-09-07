#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	
	while(cin >> n)
	{
		int ans = 0;
		for(int q = 0; q < 10; q++)
		{
			for(int w = 0; w < 10; w++)
			{
				for(int e = 0; e < 10; e++)
				{
					for(int r = 0; r < 10; r++)
					{
						if(q + w + e + r == n)
						{
							ans++;
						}
					}
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
} 
