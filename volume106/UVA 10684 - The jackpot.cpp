#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	while(cin >> n && n)
	{
		int ary[10005], maxn = 0, k = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> ary[i];
		}
		
		for(int i = 0; i < n; i++)
		{

			k += ary[i];
			maxn = max(maxn, k);
			if(k < 0)
			{
				k = 0;
			}
		}
		if(maxn == 0)
		{
			printf("Losing streak.\n");
		}
		else
		{
			printf("The maximum winning streak is %d.\n", maxn);
		}
	}
	return 0;
}
