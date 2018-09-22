#include<bits/stdc++.h>

using namespace std;
int ary[100005], ary1[100005], ary2[100005];

int main()
{
	int n;
	while(cin >> n && n)
	{
		int m;
		
		for(int i = 0; i < n; i++)
		{
			char x, y;
			cin >> x >> y;
			ary1[i] = x;
			ary2[i] = y; 
		}
		cin >> m;
		for(int i = 0; i < m; i++)
		{
			char x;
			cin >> x;
			ary[i] = x;
		}
		for(int i = 0; i < m; i++)
		{	
			for(int j = 0; j < n; j++)
			{
				if(ary[i] == ary1[j])
				{
					printf("%c", ary2[j]);
					break;
				}
				if(j == n - 1)
				{
					printf("%c", ary[i]);
				}
			}
		}
		puts("");
	}
	return 0;
}
