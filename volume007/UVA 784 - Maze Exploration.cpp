#include<bits/stdc++.h>

using namespace std;
char a[100][100];
void dfs(int x, int y);
int main()
{
	int n;
	cin >> n;
	for(int t = 0; t < n; t++)
	{
		int k = 0;
		while(gets(a[k++]))
		{
			if(a[k-1][0]=='_')
			{
				k--;
				break;
			}
		}
		
		for(int k=0; a[k][0]!='_'; k++)
		{
			for(int j=0; a[k][j]!='\0'; j++)
			{
				if(a[k][j]=='*')
				{
					dfs(k, j);
				}
			}
		}
		for(int k=0; a[k][0]!='_'; k++)
		{
			if(t == 0 && k == 0)
			{
				continue;
			}
			for(int j=0; a[k][j]!='\0'; j++)
			{
				printf("%c", a[k][j]);
			}
			puts("");
		}
		puts("_____");
	}
	return 0;		
}

void dfs(int x, int y) 
{
    if(a[x][y] == 'X' || a[x][y] == '#')
    {
    	return;
	}
    a[x][y] = '#';
    dfs(x+1, y);
    dfs(x-1, y);
    dfs(x, y+1);
    dfs(x, y-1);
}
