#include <iostream>
using namespace std;

const int AMAX = 1e5 + 7;

struct Star
{
	int x;
	int y;
	int s;
};

int main()
{
	int N, Q, C, n[107][107][17], f[107][107][11];
	Star star[AMAX];
	
	for(int i = 0; i < 107; ++i)
	{
		for(int j = 0; j < 107; ++j)
		{
			for(int k = 0; k < 11; ++k)
			{
				n[i][j][k] = 0;
			}
		}
	}
	
	cin >> N >> Q >> C;
	
	int x, y, s;
	for(int i = 0; i < N; ++i)
	{
		cin >> x >> y >> s;
		++n[x][y][s];
	}
	
	for(int i = 1; i < 107; ++i)
	{
		for(int j = 1; j < 107; ++j)
		{
			for(int k = 0; k < 11; ++k)
			{
				f[i][j][k] = n[i][j][k] + f[i - 1][j][k] + f[i][j - 1][k] - f[i - 1][j - 1][k];
			}
		}
	}
	
	int t, x1, y1, x2, y2, a[11];
	for(int q = 0; q < Q; ++q)
	{
		cin >> t >> x1 >> y1 >> x2 >> y2;
		
		int ans = 0;
		for(int i = 0; i < 11; ++i)
		{
			a[i] = f[x2][y2][i] - f[x1 - 1][y2][i] - f[x2][y1 - 1][i] + f[x1 - 1][y1 - 1][i];
			ans += ((i + t % (C + 1)) % (C + 1)) * a[i];
		}
		
		cout << ans << endl;
	}

    return 0;
}

