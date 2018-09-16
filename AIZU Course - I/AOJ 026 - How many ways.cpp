#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	while(cin >> n >> m)
	{
		int ans = 0;
		if(n == 0 && m == 0)
		{
			break;
		}
		for(int i = 1; i < n -1; i++)
		{
			for(int j = i + 1; j < n; j++)
			{
				for(int k = j + 1; k < n + 1; k++)
				{
					if(m == i + j + k)
					{
						ans++;
					}
				}
			}	
		}
		cout << ans << endl;
	}
	return 0;
}
