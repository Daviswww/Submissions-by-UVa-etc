/*
Date:2019/4/18

題意:
	找出最小分貝路徑中最大的分貝。 
	
思路:
	將所有路徑跑過一遍一一比較儲存。 
note:
	輸入: start = 2, end = 6
	map[2][1] 與 map[1][3] 路徑 (50 < 60)，取較大的存入再與原路段比較 map[2][3](100000 > 60) map[2][3]=60 
	map[2][3] 與 map[3][6] 路徑 (60 > 50)，取較大的存入再與原路段比較 map[2][6](100000 > 60) map[2][6]=60
*/

#include<cstdio>
#include<cstdlib>
#define min(x, y) x < y ? x : y
const int maxc = 105;
const int maxs = 1005; 

int main()
{
	int n, m, q, count = 0;
	
	while(scanf("%d %d %d", &n, &m, &q), n != 0)
	{
		int map[maxc][maxs];
		//初始化 
		for(int i = 0; i < maxc; i++)
		{
			for(int j = 0; j < maxs; j++)
			{
				map[i][j] = 100000;	
			}
		}
		//儲存路徑 
		for(int i = 0; i < m; i++)
		{
			int l, r, q;
			scanf("%d %d %d", &l, &r, &q);
			map[l][r] = q;
			map[r][l] = q;
		}
		//將全部路徑跑過一遍 
		for(int k = 1; k <= n; k++)
		{
			for(int i = 1; i <= n; i++)
			{
				for(int j = 1; j <= n; j++)
				{
					//判斷此路徑誰比較大 I~K K~J 路徑取最大值 
					if(map[i][k] > map[k][j])
					{
						//I~J與路段比較取較小的 
						map[i][j] = min(map[i][k], map[i][j]);
					}
					else
					{
						map[i][j] = min(map[k][j], map[i][j]);
					}
				}
			}
		}
		if(count)
		{
			printf("\n");	
		} 
		printf("Case #%d\n", ++count);
		for(int i = 0; i < q; i++)
		{
			int start, end;
			
			scanf("%d %d", &start, &end);
			//若路徑沒被更動表示無此路徑 
			if(map[start][end] == 100000)
			{
				printf("no path\n");
			}
			else
			{
				printf("%d\n", map[start][end]);
			}
		}	
	}
	return 0;
}
