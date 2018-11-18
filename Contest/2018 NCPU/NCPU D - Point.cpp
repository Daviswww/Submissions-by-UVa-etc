#include<bits/stdc++.h>
#define N 605
using namespace std;

struct point
{
	int x = 0;
	int y = 0;
};
const int min_n = -50;
int d[N][N];

int main()
{
	int t;
	cin >> t;
	while(t--) 
	{
		int p, ans = 0;
		cin >> p;
		
		point points[p];
		for(int i = 0; i < p ; i++)
		{
			cin >> points[i].x >> points[i].y;
		}
		if(p > 2)
		{
			for(int i = 0; i < p; i++)
			{
				for(int j = 0; j < p; j++)
				{
					d[i][j] = min_n;
					int x = points[i].x - points[j].x;
					int y = points[i].y - points[i].y;
					d[i][j] = x * x + y * y;
					d[j][i] = d[i][j];
				}
			}
			for(int i = 0; i < p; i++)
			{
				for(int j = 0; j < p; j++)
				{
					for(int k = 0; k < p; k++)
					{
						if(d[i][j] == d[i][k] && i != j && i != k && j != k)
						{
							ans++;
						}
					}
				}
			}
			cout << ans / 2 << endl;
		}
	}
	return 0;
}
