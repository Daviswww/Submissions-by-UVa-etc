#include<bits/stdc++.h>
#define swap(x, y) {int tmp; tmp = x, x = y, y = tmp;}
using namespace std;

int main()
{
	int w, n;
	while(cin >> w)
	{
		int ary[35] = {0};
		for(int i = 1; i <= w; i++)
		{
			ary[i] = i;
		} 
		cin >> n;
		for(int i = 0;i < n; i++)
		{
			int x, y;
			scanf("%d,%d", &x, &y);
			swap(ary[x], ary[y]);
		}
		for(int i = 1; i <= w; i++)
		{
			cout << ary[i] << endl;
		}
	}
	return 0;	
} 
