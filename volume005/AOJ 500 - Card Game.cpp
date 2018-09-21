#include<bits/stdc++.h>

using namespace std;

int main( )
{
	int n, m;
	while(cin >> n && n)
	{
		int j, k, p1 = 0, p2 = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> j >> k;
			if(j > k)
			{
				p1 += j + k;	
			}
			else if(j < k)
			{
				p2 += k + j;
			}
			else if(j == k)
			{
				p1 += j, p2 += k;
			}
		}
		printf("%d %d\n", p1, p2);
	}
	return 0; 
}
