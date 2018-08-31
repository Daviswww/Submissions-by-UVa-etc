#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	while(cin >> n >> m)
	{
		int ary[105][105], a[105];
		for(int i = 0;i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				cin >> ary[i][j];
			}
		}
		for(int i = 0;i < m; i++)
		{
			cin >> a[i];
		}
		for(int i = 0;i < n; i++)
		{
			int sum = 0;
			for(int j = 0; j < m; j++)
			{
				sum += ary[i][j] * a[j];
			}
			cout << sum << endl; 
		}
	}
	return 0;
}

