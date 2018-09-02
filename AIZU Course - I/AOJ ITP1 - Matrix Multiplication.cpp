#include<bits/stdc++.h>
#define M 105
using namespace std;

int main()
{
	int n, m, l;
	
	while(cin >> n >> m >> l)
	{
		int ary1[M][M], ary2[M][M];
		for(int i = 0; i < n; i++)
		{
			for(int j = 0;  j < m; j++)
			{
				cin >> ary1[i][j];
			}
		}
		for(int i = 0; i < m; i++)
		{
			for(int j = 0;  j < l; j++)
			{
				cin >> ary2[i][j];
			}
		}
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < l; j++)
			{
				long long sum = 0;
				for(int p = 0; p < m; p++)
				{
					sum += ary1[i][p] * ary2[p][j];
				}				
				cout << sum;
				if( j != l -1)
				{
					cout << " ";	
				}					
			}
			puts("");
		}
	}
	return 0;
}

