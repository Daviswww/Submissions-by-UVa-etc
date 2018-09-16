#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	while(cin >> n >> m)
	{
		if(n == 0 && m == 0)
		{
			break;
		}
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				cout << "#";
			}
			puts("");
		}
		puts("");
	}
	return 0;
}
