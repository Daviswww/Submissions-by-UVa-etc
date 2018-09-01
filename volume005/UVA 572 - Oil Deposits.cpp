#include <bits/stdc++.h>

using namespace std;
void maze(int x, int y);
char mapx[101][101];
int m, n;

int main()
{
	while(cin >> m >> n)
	{
		int Oil = 0;
		if(n == 0 && m == 0)
		{
			break;
		}
		for(int i = 1; i <= m; i++)
		{
			for(int j = 1; j <= n; j++)
			{
				scanf(" %c", &mapx[i][j]);
			}			
		}
		for(int i = 1; i <= m; i++)
		{
			for(int j = 1 ; j <= n; j++)
			{
				if(mapx[i][j] == '@')
				{
					maze(j, i);
					Oil++;
				}				
			}
			
		}
		printf("%d\n", Oil);
	}
	return 0;
}
//DFS
void maze(int x, int y)
{
	mapx[y][x] = '1';
	if(y-1 >=1 && mapx[y-1][x] == '@')
	{
		//North
		maze(x, y-1);
	} 
	if(y-1 >=1 && x+1 <= n && mapx[y-1][x+1] == '@')
	{
		//NorthEast
		maze(x+1, y-1);
	}
	if(x+1 <= n && mapx[y][x+1] == '@')
	{
		//East
		maze(x+1, y);
	}
	if(y+1 <= m && x-1 >= 1 && mapx[y+1][x-1] == '@')
	{
		//SouthEast
		maze(x-1, y+1);
	}	
	if(x-1 >=1 && mapx[y][x-1] == '@')
	{
		//West
		maze(x-1, y);
	}
	if(y+1 <= m && mapx[y+1][x] == '@') 
	{	
		//South
		maze(x, y+1);
	}
	if(y+1 <= m && x+1 <= n && mapx[y+1][x+1] == '@')
	{
		//SouthWest
		maze(x+1, y+1);
	}
	if(y-1 >=1 && x-1 >= 1 && mapx[y-1][x-1] == '@') 
	{
		//WestNorth
		maze(x-1, y-1);
	}
}
