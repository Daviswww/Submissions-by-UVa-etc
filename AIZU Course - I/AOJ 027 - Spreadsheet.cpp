#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, ary[105][105], a[105];
	while(cin >> n >> m)
	{
		for(int i = 0; i < n; i ++)
		{
			int sum = 0;
			for(int j = 0; j < m; j++)
			{
				cin >> ary[i][j];
				sum += ary[i][j];
			}
			ary[i][m] = sum;
		}
			
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j <= m; j++)
			{	
				printf("%d", ary[i][j]);
				if(j != m)
				{
					cout << " ";
				}
			}
			puts("");
		}
		for(int i = 0; i <= m; i++)
		{
			int sum = 0;
			for(int j = 0; j < n; j++)
			{
				sum += ary[j][i];
			}
			printf("%d", sum);
			if(i != m)
			{
				cout << " ";
			}
		}
		puts("");
	}
	return 0;
}

