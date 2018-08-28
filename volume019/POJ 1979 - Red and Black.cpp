#include<iostream>
#include<cstdio>
#include<cstring>
#include<stack>
#define M 25
#define N 25

using namespace std;

int main(void)
{
	int n, m;
	int q = 0, w = 0;
	while(cin >> n >> m)
	{
		string maze[N];
		int map[N][M];
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < M; j++) 
			{
				map[i][j] = 1;
			}
		}
		if(n == 0 && m == 0) break;
		for(int i = 1;i <= m;i++)
		{
			cin >> maze[i];
		}
		for(int i = 1; i <= m; i++)
	 	{
	       	for(int j = 0; j < n; j++)
	       	{
			   	if(maze[i][j] == '@')
				{
					map[i][j+1] = 0;
					q = i, w = j;
				}
			    if(maze[i][j] == '#') {map[i][j+1] = 1;}
			   	if(maze[i][j] == '.') {map[i][j+1] = 0;}
			}
		}
		int k = 0;
	    stack<int> a, s;
	    while(1)
	    {
			if(map[q][w+1] == 0)
			{
				a.push(q), s.push(w), w += 1, k++;
				map[q][w] = 1;
				continue;
			}
			else if(map[q+1][w] == 0)
			{
				a.push(q), s.push(w), q += 1, k++;
				map[q][w] = 1;
				continue;
			}
			else if(map[q][w-1] == 0)
			{
				a.push(q), s.push(w), w -= 1, k++;
				map[q][w] = 1;
				continue;
			}
			else if(map[q-1][w] == 0)
			{
				a.push(q), s.push(w), q -= 1, k++;
				map[q][w] = 1;
				continue;
			}
			else
			{
				q = a.top(), a.pop();
				w = s.top(), s.pop();
			}
			if(a.empty())
			{
				break;
			}
		}
		cout << k << endl;
	}
    return 0;
}
